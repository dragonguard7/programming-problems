#include <stdio.h>

int happyNumber(int n){
    int i,sum = 0, temp = 0, numAttempts = 15;
    for(i = 0; i < numAttempts;i++){
        while(n > 0){
            temp = n % 10;
            sum += temp * temp;
            n /= 10;

        }
        if(sum == 1){return 1;}
        n = sum;
        sum = 0;
    }

    return 0;
}

int main(void)
{
    int n = 0;
    while(n >= 0){
        printf("Please enter a non negative number\n");
        scanf("%d", &n);

        happyNumber(n) == 1 ? printf("Number happy!\n") : printf("Number sad\n") ;
    }
    return 0;
}

