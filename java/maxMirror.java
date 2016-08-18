/*
We'll say that a "mirror" section in an array is a group of contiguous elements such that somewhere in the array, the same group appears in reverse order. For example, the largest mirror section in {1, 2, 3, 8, 9, 3, 2, 1} is length 3 (the {1, 2, 3} part). Return the size of the largest mirror section found in the given array.

maxMirror([1, 2, 3, 8, 9, 3, 2, 1]) -> 3
maxMirror([1, 2, 1, 4]) -> 3
maxMirror([7, 1, 2, 9, 7, 2, 1]) -> 2
*/

public int maxMirror(int[] nums) {
  if(nums.length == 0) return 0;
  int span = 1;
  //Lets iterate through the array
  for(int i = 0; i < nums.length;i++){
    //lets grab the current number
    int value = nums[i];
    int valuePos = i;

    //Now we want to start from the back and find the number
    for(int j = nums.length-1; j > i; j--){
      //if we find the same number.. lets calculate 
      int count = 0;
      int first = i, second = j;
      //This will count the number of times a mirrored value appears, even goin back over
        while(nums[first] == nums[second]){
           count++;
           first++;
           second--;
           if(first < 0 || first > nums.length-1 || second > nums.length-1 || second < 0)break;
        }
        if(count > span) span = count;
    }
  }
  return span;
}
}
