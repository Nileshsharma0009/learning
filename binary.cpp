#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());

        int maxPlatforms = 0;
        for (int i = 0; i < n; i++) {
            // Count arrivals till now = i+1
            // Count departures before current arrival
            int departuresBefore = upper_bound(dep.begin(), dep.end(), arr[i] - 1) - dep.begin();
            int platformsNeeded = (i + 1) - departuresBefore;
            maxPlatforms = max(maxPlatforms, platformsNeeded);
        }
        return maxPlatforms;
    }
};