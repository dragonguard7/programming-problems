#include <stdio.h>

/*
 * This program takes a given array with specified
 * size and shifts all 0's to the end of the array.
*/

void moveZeroes(int* nums, int numsSize) {
    int i = 0, numZeroes = 0;
    for(; i + numZeroes< numsSize; i++){

        while(nums[i + numZeroes] == 0){
            numZeroes++;

        }
            if(i+numZeroes >= numsSize)
            break;
            nums[i] = nums[i+numZeroes];
    }
    for(;i < numsSize; i++){
        nums[i] = 0;
    }
}

void printArray(int *nums, int numsSize){
    int i;
    for(i = 0; i < numsSize;i++){
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int main(void)
{
    int nums[] = {0,0 ,1,0, 0};
    int numsSize = 5;
    printArray(nums, numsSize);
    moveZeroes(nums, numsSize);
    printArray(nums, numsSize);

    return 0;
}

