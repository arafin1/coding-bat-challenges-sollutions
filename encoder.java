/*

Write a function that replaces the words in `raw` with the words in `code_words` such that the first occurrence of each word in `raw` is assigned the first unassigned word in `code_words`.


encoder(["a"], ["1", "2", "3", "4"]) → ["1"]
encoder(["a", "b"], ["1", "2", "3", "4"]) → ["1", "2"]
encoder(["a", "b", "a"], ["1", "2", "3", "4"]) → ["1", "2", "1"]
*/

public String[] encoder(String []raw, String[] code_words) {
    Map<String, String>  map = new HashMap();
      String[] strArray={};
    for (int i = 0; i < raw.length; i++) {
      if (map.containsKey(raw[i])) {
      map.put(raw[i], map.get(raw[i]));
      } else {
      map.put(raw[i],code_words[i] );
      }
    }
    
    for (String s : raw){
    strArray = new String[] {map.get(s)};
    }
    
    for(String s: strArray){
      return s.toString();
    }
  return null;
}
