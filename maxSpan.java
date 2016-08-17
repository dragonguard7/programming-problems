/*
Consider the leftmost and righmost appearances of some value in an array. We'll say that the "span" is the number of elements between the two inclusive. A single value has a span of 1. Returns the largest span found in the given array. (Efficiency is not a priority.)

maxSpan([1, 2, 1, 1, 3]) -> 4
maxSpan([1, 4, 2, 1, 4, 1, 4]) -> 6
maxSpan([1, 4, 2, 1, 4, 4, 4]) -> 6
*/

public int maxSpan(int[] nums) {
  if(nums.length == 0)return 0;
 int maxSpan = 1;
 for(int i = 0; i < nums.length;i++){
   //Start from the first value. Now lets start from the end going backwards.
   int value = nums[i];
   //We start from the end going up to i, no point in going past where we started
   for(int j = nums.length-1; j > i; j--){
     //If we find a matching number. compute the span and break.
     if(value == nums[j]){
       if(maxSpan < (j-i+1)){
         maxSpan = j - i +1;
       }
     }
   }
 }
 return maxSpan;
}