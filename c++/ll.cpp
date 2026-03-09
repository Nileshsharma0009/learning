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

