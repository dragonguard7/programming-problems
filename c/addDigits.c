#include <stdio.h>

/* This program takes a given number and
 * adds all the digits recursively until
 * there is only a number between 0-9.
*/

int addDigits(int num){

    int sum = 0, digit = 0;
    if(num < 10){
        return num;
    }
    while(num > 0){
        digit = num %10;
        sum+=digit;
        num/= 10;
    }
    return addDigits(sum);
}

int main(void)
{
    printf("The added digits are: %d!\n", addDigits(547));
    return 0;
}

