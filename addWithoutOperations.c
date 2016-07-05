#include <stdio.h>

int add(int a, int b) {
   if (a == 0)
      return b;
   else
      return add((a & b) << 1, a ^ b);
}

int addIncrement(int a, int b){
    int i;
    if(b > 0){
        for(i = 0; i < b; i++){
            a++;
        }
    }
    else{
        for(i = b; i < 0; i++){
            a--;
        }
    }

    return a;

}

int main (void)
{

   int a = 2147483646, b = -2147483648;

   //printf("Addition of two num is : %d\n", add(-5, 3));

    printf("Addition of two num is : %d\n", addIncrement(-5, -5));

return 0;
}
