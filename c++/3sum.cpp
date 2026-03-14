class Solution {
public:
   void solve(vector<int>& arr, int index, int n, int sum, vector<int>& ans) {
    // Base Case: We've considered all elements
    if (index == n) {
        ans.push_back(sum);
        return;
    }

    // Choice 1: Include the current element
    solve(arr, index + 1, n, sum + arr[index], ans);

    // Choice 2: Exclude the current element
    solve(arr, index + 1, n, sum, ans);
}

vector<int> subsetSums(vector<int>& arr) {
    vector<int> ans;
    int n = arr.size();
    solve(arr, 0, n, 0, ans);
    
    // Crucial for most OJ platforms
    sort(ans.begin(), ans.end()); 
    
    return ans;
}
};
class Solution {
public:
   void solve(vector<int>& arr, int index, int n, int sum, vector<int>& ans) {
    // Base Case: We've considered all elements
    if (index == n) {
        ans.push_back(sum);
        return;
    }

    // Choice 1: Include the current element
    solve(arr, index + 1, n, sum + arr[index], ans);

    // Choice 2: Exclude the current element
    solve(arr, index + 1, n, sum, ans);
}

vector<int> subsetSums(vector<int>& arr) {
    vector<int> ans;
    int n = arr.size();
    solve(arr, 0, n, 0, ans);
    
    // Crucial for most OJ platforms
    sort(ans.begin(), ans.end()); 
    
    return ans;
}
};
class Solution {
public:
   void solve(vector<int>& arr, int index, int n, int sum, vector<int>& ans) {
    // Base Case: We've considered all elements
    if (index == n) {
        ans.push_back(sum);
        return;
    }

    // Choice 1: Include the current element
    solve(arr, index + 1, n, sum + arr[index], ans);

    // Choice 2: Exclude the current element
    solve(arr, index + 1, n, sum, ans);
}

vector<int> subsetSums(vector<int>& arr) {
    vector<int> ans;
    int n = arr.size();
    solve(arr, 0, n, 0, ans);
    
    // Crucial for most OJ platforms
    sort(ans.begin(), ans.end()); 
    
    return ans;
}
};
class Solution {
public:
   void solve(vector<int>& arr, int index, int n, int sum, vector<int>& ans) {
    // Base Case: We've considered all elements
    if (index == n) {
        ans.push_back(sum);
        return;
    }

    // Choice 1: Include the current element
    solve(arr, index + 1, n, sum + arr[index], ans);

    // Choice 2: Exclude the current element
    solve(arr, index + 1, n, sum, ans);
}

vector<int> subsetSums(vector<int>& arr) {
    vector<int> ans;
    int n = arr.size();
    solve(arr, 0, n, 0, ans);
    
    // Crucial for most OJ platforms
    sort(ans.begin(), ans.end()); 
    
    return ans;
}
};
class Solution {
public:
   void solve(vector<int>& arr, int index, int n, int sum, vector<int>& ans) {
    // Base Case: We've considered all elements
    if (index == n) {
        ans.push_back(sum);
        return;
    }

    // Choice 1: Include the current element
    solve(arr, index + 1, n, sum + arr[index], ans);

    // Choice 2: Exclude the current element
    solve(arr, index + 1, n, sum, ans);
}

vector<int> subsetSums(vector<int>& arr) {
    vector<int> ans;
    int n = arr.size();
    solve(arr, 0, n, 0, ans);
    
    // Crucial for most OJ platforms
    sort(ans.begin(), ans.end()); 
    
    return ans;
}
};
class Solution {
public:
   void solve(vector<int>& arr, int index, int n, int sum, vector<int>& ans) {
    // Base Case: We've considered all elements
    if (index == n) {
        ans.push_back(sum);
        return;
    }

    // Choice 1: Include the current element
    solve(arr, index + 1, n, sum + arr[index], ans);

    // Choice 2: Exclude the current element
    solve(arr, index + 1, n, sum, ans);
}

vector<int> subsetSums(vector<int>& arr) {
    vector<int> ans;
    int n = arr.size();
    solve(arr, 0, n, 0, ans);
    
    // Crucial for most OJ platforms
    sort(ans.begin(), ans.end()); 
    
    return ans;
}
};