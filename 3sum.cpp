

// vector<vector<int>> findThreeSum(vector<int>& nums) {
//     vector<vector<int>> result;

//     // Step 1: Sort the array
//     sort(nums.begin(), nums.end());
//     int n = nums.size();

//     // Step 2: Iterate through the array with 'i' as the first element of the triplet
//     for (int i = 0; i < n - 2; ++i) {
//         // Skip duplicate 'i' values to avoid duplicate triplets
//         if (i > 0 && nums[i] == nums[i - 1]) continue;

//         int left = i + 1; // Pointer for the second element
//         int right = n - 1; // Pointer for the third element

//         // Step 3: Use two pointers to find the other two numbers
//         while (left < right) {
//             int currentSum = nums[i] + nums[left] + nums[right];
//             if (currentSum == 0) {
//                 // Found a triplet that sums to zero
//                 result.push_back({nums[i], nums[left], nums[right]});

//                 // Move pointers and skip duplicates for 'left' and 'right'
//                 while (left < right && nums[left] == nums[left + 1]) left++;
//                 while (left < right && nums[right] == nums[right - 1]) right--;

//                 left++;
//                 right--;
//             } else if (currentSum < 0) {
//                 left++; // Increase the sum
//             } else {
//                 right--; // Decrease the sum
//             }
//         }
//     }

//     return result;
// }








// vector<int> maxPrefixes(vector<int>& arr, vector<int>& leftIndex, vector<int>& rightIndex) {
//     // Your code here


// 	   vector<int> ans;

//     int q = leftIndex.size();

//     for (int i = 0; i < q; i++) {

//         int L = leftIndex[i];
//         int R = rightIndex[i];

//         int currSum = 0;
//         int maxSum = INT_MIN;

//         int k = L;   // left pointer

//         while (k<= R) {
//             currSum += arr[k];          // prefix sum
//             maxSum = max(maxSum, currSum);
//             k++;                        // move right
//         }

//         ans.push_back(maxSum);
//     }

//     return ans;
// }






// bool search(vector<int>& nums, int target) {
// 	// your code here
//     int start = 0, end = nums.size() - 1;

//     while (start <= end) {
//         int mid = start + (end - start) / 2;

//         if (nums[mid] == target)
//             return true;

//         // Case 1: duplicates on both ends
//         if (nums[start] == nums[mid] && nums[mid] == nums[end]) {
//             start++;
//             end--;
//         }
//         // Case 2: left half is sorted
//         else if (nums[start] <= nums[mid]) {
//             if (nums[start] <= target && target < nums[mid])
//                 end = mid - 1;
//             else
//                 start = mid + 1;
//         }
//         // Case 3: right half is sorted
//         else {
//             if (nums[mid] < target && target <= nums[end])
//                 start = mid + 1;
//             else
//                 end = mid - 1;
//         }
//     }
//     return false;
// }
