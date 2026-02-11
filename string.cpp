int strStr(string &haystack, string &needle) {
    int m = haystack.size();
    int n = needle.size();

    if (n == 0) return 0;

    // Step 1: Build LPS array
    vector<int> lps(n, 0);
    int prefix = 0, suffix = 1;

    while (suffix < n) {
        if (needle[prefix] == needle[suffix]) {
            lps[suffix] = prefix + 1;
            prefix++;
            suffix++;
        } else {
            if (prefix == 0) {
                suffix++;
            } else {
                prefix = lps[prefix - 1];
            }
        }
    }

    // Step 2: KMP search
    int pref = 0, suf = 0;

    while (suf < m) {
        if (haystack[suf] == needle[pref]) {
            suf++;
            pref++;

            if (pref == n) {
                return suf - pref;  // match found
            }
        } else {
            if (pref == 0) {
                suf++;
            } else {
                pref = lps[pref - 1];
            }
        }
    }

    return -1; // no match
}
