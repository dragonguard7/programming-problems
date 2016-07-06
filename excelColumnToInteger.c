#include <stdio.h>

int titleToNumber(char* s) {
    int i, len = strlen(s), sum = 0, powOS = 1;
    int offset = 'A' - 1;

    for(i = len-1; i >= 0; i--){
        sum += (s[i] - offset) * powOS;
        powOS*=26;
    }
    return sum;
}


int main(void)
{
    char *s = "BA";
    printf("Column num: %d\n", titleToNumber(s));
    return 0;
}
