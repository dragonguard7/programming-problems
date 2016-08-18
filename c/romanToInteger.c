#include <stdio.h>
#include <string.h>

/*
 * Roman numerals have a strict organization
 * which includes the highest values always
 * come first. 1 exception is you can place 1
 * lesser value before a higher value for
 * subtraction.
 *
 * The following values will be used:
 * M = 1000, D = 500, C = 100, L = 50,
 * X = 10, V = 5, I = 1
 */

int getRomanValue(char c){
    switch(c){
    case 'M':
        return 1000;
    case 'D':
        return 500;
    case 'C':
        return 100;
    case 'L':
        return 50;
    case 'X':
        return 10;
    case 'V':
        return 5;
    case 'I':
        return 1;
    default:
        return 0;
    }
}

int romanToInt(char* s) {
    int i, len = strlen(s), sum = 0;

    for(i = 0; i < len-1; i++){
        if(getRomanValue(s[i]) < getRomanValue(s[i+1])){
            sum -= getRomanValue(s[i]);
        }
        else{
            sum += getRomanValue(s[i]);
        }
    }
    sum += getRomanValue(s[len-1]);
    return sum;
}


int main(void)
{
    char *s = "LXXVII";
    printf("Roman Numeral value: %d\n", romanToInt(s));
    return 0;
}

