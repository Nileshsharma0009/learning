vector<int> buildLPS(string &pat) {
    int n = pat.size();
    vector<int> lps(n, 0);

    int len = 0;
    int i = 1;

    while (i < n) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

vector<int> search(string &pat, string &txt) {
    vector<int> ans;
    int n = txt.size();
    int m = pat.size();

    if (m > n) return ans; // safety check

    vector<int> lps = buildLPS(pat);

    int i = 0; // text pointer
    int j = 0; // pattern pointer

    while (i < n) {
        if (txt[i] == pat[j]) {
            i++;
            j++;
        }

        if (j == m) {
            ans.push_back(i - j); // start index
            j = lps[j - 1];       // continue for overlap
        }
        else if (i < n && txt[i] != pat[j]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
    return ans;
}
