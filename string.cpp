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
