/*
Say that a "clump" in an array is a series of 2 or more adjacent elements of the same value. Return the number of clumps in the given array.

countClumps([1, 2, 2, 3, 4, 4]) -> 2
countClumps([1, 1, 2, 1, 1]) -> 2
countClumps([1, 1, 1, 1, 1]) -> 1
*/

public int countClumps(int[] nums) {
  if(nums.length == 1) return 0;
  int clumps = 0;
  //Go through array
  for(int i = 0; i < nums.length-1;i++){
    //if we find a clump, ignore the rest of the same and increment clumps
    if(nums[i] == nums[i+1]) clumps++;
    while(nums[i] == nums[i+1]){
      i++;
      //must check if we go out of bounds
      if(i > nums.length-2) break;
    }
  }
  return clumps;
}
