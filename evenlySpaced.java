/*
Given three ints, a b c, one of them is small, one is medium and one is large. Return true if the three values are evenly spaced, so the difference between small and medium is the same as the difference between medium and large.


evenlySpaced(2, 4, 6) → true
evenlySpaced(4, 6, 2) → true
evenlySpaced(4, 6, 3) → false
*/

public boolean evenlySpaced(int a, int b, int c) {
	     
  int med = 0;
  int medium = 0;

  int Sm= Math.min(Math.min(a, b), c);

  int Ml = Math.max(Math.max(a, b), c);
  if(Sm == Ml){
    return true;
  }
  if(a > Sm & a < Ml){
    medium = a;
  }
  
  if(b > Sm & b < Ml){
    medium = b;
  }
  
 if(c > Sm & c < Ml){
   medium = c;
 }
 
int result1 = Sm - medium;
int result2 = medium - Ml;

  if(result1 == result2){
    return true;
  }else{
    return false;
  }

}