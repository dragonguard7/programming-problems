#include <stdio.h>
#include <stdint.h>

int hammingWeight(uint32_t n){
    int oneCount = 0;
    while(n != 0){
        if(n%2 == 1){
            oneCount++;
            n >>= 1;
        }else{
            n >>=1;
        }
    }
    return oneCount;
}

int main(void)
{
    uint32_t n = 1;
    while(n != 0){
        printf("Please enter a number: \n");
        scanf("%u", &n);

        printf("The hamming weight of %u is: %d\n",n,hammingWeight(n));

    }
    return 0;
}

