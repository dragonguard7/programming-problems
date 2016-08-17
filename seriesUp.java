/*
Given n>=0, create an array with the pattern {1,    1, 2,    1, 2, 3,   ... 1, 2, 3 .. n} (spaces added to show the grouping). Note that the length of the array will be 1 + 2 + 3 ... + n, which is known to sum to exactly n*(n + 1)/2.

seriesUp(3) -> [1, 1, 2, 1, 2, 3]
seriesUp(4) -> [1, 1, 2, 1, 2, 3, 1, 2, 3, 4]
seriesUp(2) -> [1, 1, 2]

*/

public int[] seriesUp(int n) {
  int total = n*(n+1)/2;
  int count = 0;
  int array[] = new int[total];
  for(int i = n; i > 0; i--){
    int num = 1;
    for(int j = 0; j < n-i+1;j++){
      array[count] = num;
      num++;
      count++;
    }
  }
  return array;
}
