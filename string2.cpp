#include <bits/stdc++.h>
using namespace std;

vector<int> stringPatternScanner(string text, string pattern) {
    int n = text.length(), m = pattern.length();
    vector<int> result;

    // If pattern is longer than text, return [0]
    if (m > n) {
        result.push_back(0);
        return result;
    }

    // Frequency arrays for pattern and current window
    vector<int> patFreq(26, 0), windowFreq(26, 0);

    // Populate the pattern frequency
    for (char c : pattern) patFreq[c - 'a']++;

    int exactMatchCount = 0;
    for (int i = 0; i < n; i++) {
        // Add current character to the window frequency
        windowFreq[text[i] - 'a']++;

        // Remove character that is sliding out of the window
        if (i >= m) windowFreq[text[i - m] - 'a']--;

        // Check for exact match in the sliding window
        if (i >= m - 1) {
            if (windowFreq == patFreq) {
                result.push_back(i - m + 1); // Store starting index
            }
        }
    }

    // Count exact matches of the pattern in the text
    size_t pos = 0;
    while ((pos = text.find(pattern, pos)) != string::npos) {
        exactMatchCount++;
        pos += pattern.size();
    }

    // Insert exact match count at the beginning of the result array
    result.insert(result.begin(), exactMatchCount);
    return result;
}

int main() {
    string text = "abcdefbcaghi", pattern = "abc";
    vector<int> result = stringPatternScanner(text, pattern);

    for (int val : result) {
        cout << val << " ";
    }
    return 0;
}