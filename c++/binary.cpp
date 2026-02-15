// minimum number of platforms required for a railway station

// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     int minPlatform(vector<int>& arr, vector<int>& dep) {
//         int n = arr.size();
//         sort(arr.begin(), arr.end());
//         sort(dep.begin(), dep.end());

//         int maxPlatforms = 0;
//         for (int i = 0; i < n; i++) {
//             // Count arrivals till now = i+1
//             // Count departures before current arrival
//             int departuresBefore = upper_bound(dep.begin(), dep.end(), arr[i] - 1) - dep.begin();
//             int platformsNeeded = (i + 1) - departuresBefore;
//             maxPlatforms = max(maxPlatforms, platformsNeeded);
//         }
//         return maxPlatforms;
//     }
// };









// // Checks if we can ship all packages within 'days'
// // when ship capacity is limited to 'mid'
// bool possible(int mid, int days, vector<int>& weight) {

//     int currentLoad = weight[0];   // load on current day
//     int dayCount = 1;              // first day
//     int n = weight.size();

//     // Try to ship packages in order
//     for (int i = 1; i < n; i++) {

//         currentLoad += weight[i];  // add package to current day

//         // If capacity exceeded, move to next day
//         if (currentLoad > mid) {
//             dayCount++;             // need an extra day
//             currentLoad = weight[i]; // start new day with this package
//         }
//     }

//     // Check if days used are within allowed limit
//     return dayCount <= days;
// }


// int shipWithinDays(vector<int>& weight, int days) {

//     int start = 0, end = 0;
//     int n = weight.size();

//     // Step 1: Define search space
//     for (int i = 0; i < n; i++) {
//         start = max(start, weight[i]); // minimum possible capacity
//         end += weight[i];              // maximum possible capacity
//     }

//     int ans = end;

//     // Step 2: Binary search on capacity
//     while (start <= end) {

//         int mid = start + (end - start) / 2;

//         // Step 3: Feasibility check
//         if (possible(mid, days, weight)) {
//             ans = mid;        // mid is valid
//             end = mid - 1;    // try smaller capacity
//         } else {
//             start = mid + 1;  // capacity too small
//         }
//     }

//     // Step 4: Minimum valid capacity
//     return ans;
// }




//m pravsdrhgase9yt98earyte4ry989e-r8 8983wq54w9385/



// adde4dd new mlinean add did my rermaining worlk herev

