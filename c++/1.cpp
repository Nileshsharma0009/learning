int minAppendToPalindrome(string &s) {

    string rev = s;
    reverse(rev.begin(), rev.end());

    string temp = rev + "#" + s;

    int n = temp.size();
    vector<int> lps(n,0);

    int i = 1, j = 0;

    while(i < n){

        if(temp[i] == temp[j]){
            j++;
            lps[i] = j;
            i++;
        }
        else{
            if(j != 0){
                j = lps[j-1];
            }
            else{
                lps[i] = 0;
                i++;
            }
        }
    }

    return s.size() - lps[n-1];
}
int minAppendToPalindrome(string &s) {

    string rev = s;
    reverse(rev.begin(), rev.end());

    string temp = rev + "#" + s;

    int n = temp.size();
    vector<int> lps(n,0);

    int i = 1, j = 0;

    while(i < n){

        if(temp[i] == temp[j]){
            j++;
            lps[i] = j;
            i++;
        }
        else{
            if(j != 0){
                j = lps[j-1];
            }
            else{
                lps[i] = 0;
                i++;
            }
        }
    }

    return s.size() - lps[n-1];
}