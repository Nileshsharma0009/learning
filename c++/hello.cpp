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
}
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
}
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
}
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
}