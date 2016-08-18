#include <stdio.h>
#include <stdlib.h>

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

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {

    int *intersect, i, j;
    int *helper;

    qsort(nums1,nums1Size,sizeof(int),compare);
    qsort(nums2,nums2Size,sizeof(int),compare);

    if(nums1Size > nums2Size){
        intersect = malloc(sizeof(int) * nums2Size);
    }
    else{
        intersect = malloc(sizeof(int) * nums1Size);
    }
    helper = intersect;

    for(i = 0; i < nums1Size; i++){
        if(nums1[i] == nums1[i+1] && i < nums1Size-1){
            continue;
        }
        for(j = 0; j < nums2Size; j++){
            if(nums2[j] == nums2[j+1] && j < nums2Size-1){
                continue;
            }
            if(nums1[i] == nums2[j]){
                *helper = nums1[i];
                *helper++;
                *returnSize+=1;
            }
        }
    }
    intersect = realloc(intersect, sizeof(int)*(*returnSize));
    return intersect;
}

int main(void)
{
    int array1[] = {5,4,3,5,2,1};
    int array2[] = {4,8,6,5,4,4};
    int array1Size = 6;
    int array2Size = 6;

    int *intersect, intersectSize = 0;
    intersect = intersection(array1, array1Size, array2, array2Size, &intersectSize);

    printArray(intersect, intersectSize);
    return 0;
}

