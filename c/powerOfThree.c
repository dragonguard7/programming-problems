#include <stdio.h>

void powerOfThreeFast(int n){
    n != 0 && 3486784401 % n == 0 ? printf("Yes\n") : printf("No\n");
}

void powerOfThree(int n){
    if(n == 1 || n == 3){printf("Yes\n");}
    if(n%3 != 0){
        printf("No\n");
    }else
        if(n%10 != 1 && n%10 != 3 && n%10 != 7 && n%10 != 9){
        printf("No\n");
    }else {
            double reduce = n;
         while(reduce > 10){
             reduce /= 3;
         }
            if(reduce == 9){
            printf("Yes\n");
            }else{
             printf("No\n");
            }
    }
}

int main(void)
{
    int n = 0;
    while(n != -1){
        printf("Please enter a number: \n");
        scanf("%d", &n);

        powerOfThree(n);
        powerOfThreeFast(n);

    }

    return 0;
}

