int longestKSubstr(string &s, int k) {
    int left = 0 ,distinct = 0 ;
	int freq[26] ={0} ;
	int n = s.size() ;

	int maxlen = -1 ;

	for(int right = 0 ; right < n ;right++){
		int idx = s[right] - 'a';
		if(freq[idx]==0) distinct++ ;
		freq[idx]++ ;

		while(distinct > k ) {
			int leftidx = s[left] - 'a' ;
			freq[leftidx]-- ;
			if(freq[leftidx]==0)  distinct-- ;
			left++;


		} 

		if(distinct== k){
			maxlen = max(maxlen ,right - left + 1) ;
		}
	}
return maxlen ;

}