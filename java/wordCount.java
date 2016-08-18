/*

The classic word-count algorithm: given an array of strings, return a Map<String, Integer> with a key for each different string, with the value the number of times that string appears in the array.

wordCount(["a", "b", "a", "c", "b"]) -> {"b": 2, "c": 1, "a": 2}
wordCount(["c", "b", "a"]) -> {"b": 1, "c": 1, "a": 1}
wordCount(["c", "c", "c", "c"]) -> {"c": 4}
*/

public Map<String, Integer> wordCount(String[] strings) {
  Map <String, Integer> map = new HashMap<String,Integer>();
  for(int i = 0; i < strings.length;i++){
    if(map.containsKey(strings[i])){
      int value = map.get(strings[i]) + 1;
      map.put(strings[i],value);
    }else
    map.put(strings[i], 1);
  }
  return map;
}
