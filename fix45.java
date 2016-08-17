/*
Return an array that contains exactly the same numbers as the given array, but rearranged so that every 4 is immediately followed by a 5. Do not move the 4's, but every other number may move. The array contains the same number of 4's and 5's, and every 4 has a number after it that is not a 4. In this version, 5's may appear anywhere in the original array.

fix45([5, 4, 9, 4, 9, 5]) -> [9, 4, 5, 4, 5, 9]
fix45([1, 4, 1, 5]) -> [1, 4, 5, 1]
fix45([1, 4, 1, 5, 5, 4, 1]) -> [1, 4, 5, 1, 1, 4, 5]
*/

public int[] fix45(int[] nums) {
  if(nums.length < 2){
    return nums;
  }
  //Lets go through the array in 1 pass
  for(int i = 0;i < nums.length;i++){
    //first check if there is a 5 that comes first
    if(nums[i] == 5){
      //lets find it a home
      for(int j = i; j < nums.length;j++){
        //look for first 4
        if(nums[j] == 4){ 
          //if there is no 5, lets swap the numbers!
          if(nums[j+1] != 5){
            int temp = nums[i];
            nums[i] = nums[j+1];
            nums[j+1] = temp;
            //if there was a 5, lets find another one
          }else
            j++;
        }
      }

    }
    //Now for the 4, if we find a 4 we need to know...
    if(nums[i] == 4){
      //Is a 5 next? No, lets increment and go find a 5.
      if(nums[i+1] != 5){
        i++;
        //Find the first 5 and swap
        for(int j = i; j < nums.length;j++){
          if(nums[j] == 5){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
          }
        }
      //There is a 5? Great, lets skip past it since everything is good
      }else{
        i++;
      }kk
    }
  }
  return nums;
}
