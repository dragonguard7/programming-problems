/*
Given a string, compute recursively (no loops) a new string where all appearances of "pi" have been replaced by "3.14".

changePi("xpix") -> "x3.14x"
changePi("pipi") -> "3.143.14"
changePi("pip") -> "3.14p"
*/

public String changePi(String str) {
  if(str.length() == 0){
    return "";
  }
  if(str.length() == 1){
    return str.substring(0,1);
  }
  if(str.substring(0,2).equals("pi")){
    return "3.14" + changePi(str.substring(2,str.length()));
  }
  return str.charAt(0) + changePi(str.substring(1,str.length()));
}
