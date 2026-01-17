int maxDiff(vector<int> &arr) {
    // Your code here
       int n = arr.size();
       if (n < 2) return -1;

    int minSoFar = INT_MAX;
    int maxDiff = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > minSoFar) {
            maxDiff = max(maxDiff, arr[i] - minSoFar);
        } else {
            minSoFar = arr[i];
        }
    }
    return maxDiff;

}