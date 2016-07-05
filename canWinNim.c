#include <stdio.h>

/*
	For a nim game with only 1 heap and each player taking 1-3 stones
	where the person who takes the last stone wins. We only have to 
	focus on sets of 4 since a player must take at least 1, it will 
	always leave the other player with a winning hand. Therefore, if
	you pull first AND the number of stones are not divisible by 4,
	you will be guaranteed to win by reducing the stones to a set of 4
	and maintaining it until there are no stones left.

*/

int main (void)
{

   int stones = 7;
   (stones%4==0) ? printf("You lose\n") : printf("You win\n");

return 0;
}
