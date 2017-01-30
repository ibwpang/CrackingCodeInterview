public boolean isUniqueString(String str){
	
	if(str.length()>256){
		return false;
	}
	boolean[] set = new boolean[256]; //bit map
	for(int i=0; i<str.length();i++){
		int val = str.charAt(i);
		if(set[val]){
			return false;
		}
		set[val]=true;
	}
	return true;

}