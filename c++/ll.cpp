vector<int > Build(string & pat){
	int n = pat.size();
   vector<int> lps(n ,0);
	int prefix=0 ;
	int suffix = 1;

	while(suffix < n){
		if(pat[prefix]==pat[suffix]){
			prefix++;
			lps[suffix]=prefix ;
			suffix;
		}
	}

}


vector<int> search(string &pat, string &txt) {
    // Your code here
    int n = pat.size();
	int m = txt.size();
    vector<int> ans ;
	vector<int> LPS = Build(pat) ;

	if( n > m ){
		return;
	}

	int text = 0 , pattern = 0 ;

	while(text < m){
		if(pat[pattern]==txt[text]){
			text++, pattern++;
		}

		if(pattern == n){
			ans.push_back(text - pattern);

			pattern = lps[pattern -1];
		}else if(text < n && txt[text] != pat[pattern]){
			if(pattern!= 0){
				pattern - lps[pattern -1] ;
			}else{
				text++ ;
			}
		}
	}return ans ;


		
}