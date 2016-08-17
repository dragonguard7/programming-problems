/*
Given two arrays of ints sorted in increasing order, outer and inner, return true if all of the numbers in inner appear in outer. The best solution makes only a single "linear" pass of both arrays, taking advantage of the fact that both arrays are already in sorted order.

linearIn([1, 2, 4, 6], [2, 4]) -> true
linearIn([1, 2, 4, 6], [2, 3, 4]) -> false
linearIn([1, 2, 4, 4, 6], [2, 4]) -> true
*/

public boolean linearIn(int[] outer, int[] inner) {
  int outterSpot = 0, count = 0, innerSpot = 0;

    for(int j = 0; j < outer.length;j++){
      if(innerSpot == inner.length) break;
      if(inner[innerSpot] == outer[j]){
        innerSpot++;
      }

    }

  if(innerSpot == inner.length){
    return true;
  }
  
  return false;
}
