#include <stdio.h>


/*  This program iterates from 1 to N (inclusive)
 *  and displays Fizz if N divisible by 3, Buzz
 *  if N is divisible by 5, FizzBuzz if N divisible
 *  by 3 and 5, else N.
 *
 *  Completed with and without using modulus.
*/

int main (void)
{

  int i;
  int n = 50;

  for(i = 1; i <= n;i++){
      //Using 0 = false, and anything else is true
      //(!(i%3)) == (i%3 == 0)
      if(!(i%3)){
          printf("Fizz");
      }
      if(!(i%5)){
          printf("Buzz");
      }
      if(i%3 && i%5){
          printf("%d",i);
      }
      printf("\n");
  }

//Without modulus
/*
    int three = 0, five = 0;
    for(i = 1; i <= n; i++){
        three++;
        five++;
        if(three != 3 && five != 5){
            printf("%d",i);
        }
        if(three == 3){
            printf("Fizz");
            three = 0;
        }
        if(five == 5){
            printf("Buzz");
            five = 0;
        }
        printf("\n");
    }
*/
return 0;
}
