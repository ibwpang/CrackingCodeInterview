void reverse(char *str){
	
	char* end = str;
	
	char  tmp;
	if(str){
		while(*end){ //end until get the null
			++end; 
		}
		--end; //get the position of the last char
	
	
		while(str<end){
			tmp = *str;
			*str++ = *end; //*str = *end; str++; 
			*end-- = tmp;  //*end = tmp; end--;
		}
    }
   
}
