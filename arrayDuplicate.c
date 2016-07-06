#include <stdio.h>

int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

void printArray(int *nums, int numsSize){
    int i;
    for(i = 0; i < numsSize;i++){
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int containsDuplicate(int* nums, int numsSize) {

    int i;
    printArray(nums, numsSize);
    qsort(nums,numsSize,sizeof(int),compare);
    printArray(nums, numsSize);

    for(i = 0; i < numsSize-1; i++){
        if(nums[i] == nums[i+1]){
            return 1;
        }
    }
    return 0;
}

int main(void)
{
    int array[] = {5,4,3,6,2,1};
    int arraySize = 6;

    containsDuplicate(array,arraySize) ? printf("There is a duplicate\n") : printf("No duplicate\n");
    return 0;
}

