#include <iostream>
#include <vector>
using namespace std;

vector<int> stringPatternScanner(string text, string pattern) {
    
    int n = text.length();
    int m = pattern.length();
    
    vector<int> result;

    // If pattern bigger than text
    if (m > n) {
        result.push_back(0);
        return result;
    }

    // Frequency arrays (only lowercase letters)
    int patFreq[26] = {0};
    int windowFreq[26] = {0};

    // Count pattern characters
    for (int i = 0; i < m; i++) {
        patFreq[pattern[i] - 'a']++;
    }

    int exactMatchCount = 0;

    // Sliding window
    for (int i = 0; i < n; i++) {

        // Add current character to window
        windowFreq[text[i] - 'a']++;

        // Remove character if window size > m
        if (i >= m) {
            windowFreq[text[i - m] - 'a']--;
        }

        // When window size == m
        if (i >= m - 1) {

            bool isSame = true;

            // Compare both arrays
            for (int j = 0; j < 26; j++) {
                if (windowFreq[j] != patFreq[j]) {
                    isSame = false;
                    break;
                }
            }

            if (isSame) {
                result.push_back(i - m + 1);
            }
        }
    }

    // Count exact pattern matches
    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == pattern) {
            exactMatchCount++;
        }
    }

    // Insert count at beginning
    result.insert(result.begin(), exactMatchCount);

    return result;
}

int main() {
    string text = "abcdefbcaghi";
    string pattern = "abc";

    vector<int> result = stringPatternScanner(text, pattern);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
