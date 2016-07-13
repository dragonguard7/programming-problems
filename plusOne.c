#include <stdio.h>

/*
 * This program takes a given array with specified
 * size and adds 1 to it.
*/

void printArray(int *nums, int numsSize){
    int i;
    for(i = 0; i < numsSize;i++){
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int* plusOne(int* digits, int digitsSize, int* returnSize) {

    int *add, i, carry = 1;

    *returnSize = digitsSize;

    add = malloc(sizeof(int) * digitsSize);

    printArray(digits, digitsSize);

    for(i = digitsSize-1; i >= 0; i--){
        if(digits[i] == 9 && carry == 1){
            add[i] = 0;
            carry = 1;
        }else{
            add[i] = digits[i] + carry;
            carry = 0;
        }
    }
    if(carry == 1){
        *returnSize = digitsSize + 1;
        add = realloc(add, sizeof(int)*(*returnSize));
        add[0] = 1;
        add[digitsSize] = 0;
    }

    return add;
}

int main(void)
{
    int array1[] = {9,9,8,9,9,9};
    int array1Size = 6;

    int *intersect, returnSize = 0;
    intersect = plusOne(array1, array1Size, &returnSize);

    printArray(intersect, returnSize);
    return 0;
}

