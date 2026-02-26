vector<int> productExceptSelf(vector<int>& nums) {
    int s = nums.size(); 
    vector<int> answer(s, 1); 
    int prefix = 1; 

  
    for (int i = 0; i < s; i++) {
        answer[i] = prefix; 
        prefix *= nums[i]; 
    }


    int suffix = 1; 
    for (int i = s - 1; i >= 0; i--) {
        answer[i] *= suffix; 
        suffix *= nums[i]; 
    }

    return answer; 
}


class Solution {
public:
    int find(vector<int>& arr, int index, int target) {
        // Base Case 1: If target becomes 0, we found 1 valid subset
        if (target == 0) return 1;

        // Base Case 2: If we've gone through all elements or target is impossible
        if (index >= arr.size() || target < 0) return 0;

        // Choice 1: Include the current element (subtract from target)
        int pick = find(arr, index + 1, target - arr[index]);

        // Choice 2: Exclude the current element (target remains same)
        int skip = find(arr, index + 1, target);

        // Return the total count from both branches
        return pick + skip;
    }

    int countSubsetsWithSum(vector<int>& arr, int target) {
        return find(arr, 0, target);
    }
};class Solution {
public:
    int find(vector<int>& arr, int index, int target) {
        // Base Case 1: If target becomes 0, we found 1 valid subset
        if (target == 0) return 1;

        // Base Case 2: If we've gone through all elements or target is impossible
        if (index >= arr.size() || target < 0) return 0;

        // Choice 1: Include the current element (subtract from target)
        int pick = find(arr, index + 1, target - arr[index]);

        // Choice 2: Exclude the current element (target remains same)
        int skip = find(arr, index + 1, target);

        // Return the total count from both branches
        return pick + skip;
    }

    int countSubsetsWithSum(vector<int>& arr, int target) {
        return find(arr, 0, target);
    }
};class Solution {
public:
    int find(vector<int>& arr, int index, int target) {
        // Base Case 1: If target becomes 0, we found 1 valid subset
        if (target == 0) return 1;

        // Base Case 2: If we've gone through all elements or target is impossible
        if (index >= arr.size() || target < 0) return 0;

        // Choice 1: Include the current element (subtract from target)
        int pick = find(arr, index + 1, target - arr[index]);

        // Choice 2: Exclude the current element (target remains same)
        int skip = find(arr, index + 1, target);

        // Return the total count from both branches
        return pick + skip;
    }

    int countSubsetsWithSum(vector<int>& arr, int target) {
        return find(arr, 0, target);
    }
};
vector<int> productExceptSelf(vector<int>& nums) {
    int s = nums.size(); 
    vector<int> answer(s, 1); 
    int prefix = 1; 

  
    for (int i = 0; i < s; i++) {
        answer[i] = prefix; 
        prefix *= nums[i]; 
    }


    int suffix = 1; 
    for (int i = s - 1; i >= 0; i--) {
        answer[i] *= suffix; 
        suffix *= nums[i]; 
    }

    return answer; 
}


class Solution {
public:
    int find(vector<int>& arr, int index, int target) {
        // Base Case 1: If target becomes 0, we found 1 valid subset
        if (target == 0) return 1;

        // Base Case 2: If we've gone through all elements or target is impossible
        if (index >= arr.size() || target < 0) return 0;

        // Choice 1: Include the current element (subtract from target)
        int pick = find(arr, index + 1, target - arr[index]);

        // Choice 2: Exclude the current element (target remains same)
        int skip = find(arr, index + 1, target);

        // Return the total count from both branches
        return pick + skip;
    }

    int countSubsetsWithSum(vector<int>& arr, int target) {
        return find(arr, 0, target);
    }
};class Solution {
public:
    int find(vector<int>& arr, int index, int target) {
        // Base Case 1: If target becomes 0, we found 1 valid subset
        if (target == 0) return 1;

        // Base Case 2: If we've gone through all elements or target is impossible
        if (index >= arr.size() || target < 0) return 0;

        // Choice 1: Include the current element (subtract from target)
        int pick = find(arr, index + 1, target - arr[index]);

        // Choice 2: Exclude the current element (target remains same)
        int skip = find(arr, index + 1, target);

        // Return the total count from both branches
        return pick + skip;
    }

    int countSubsetsWithSum(vector<int>& arr, int target) {
        return find(arr, 0, target);
    }
};class Solution {
public:
    int find(vector<int>& arr, int index, int target) {
        // Base Case 1: If target becomes 0, we found 1 valid subset
        if (target == 0) return 1;

        // Base Case 2: If we've gone through all elements or target is impossible
        if (index >= arr.size() || target < 0) return 0;

        // Choice 1: Include the current element (subtract from target)
        int pick = find(arr, index + 1, target - arr[index]);

        // Choice 2: Exclude the current element (target remains same)
        int skip = find(arr, index + 1, target);

        // Return the total count from both branches
        return pick + skip;
    }

    int countSubsetsWithSum(vector<int>& arr, int target) {
        return find(arr, 0, target);
    }
};