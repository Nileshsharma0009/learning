// int maxSubarraySum(vector<int> &arr) {
//         // Code here
//         long long  currSum= 0 ;
//         long long maxi=INT_MIN; 
//         int n = arr.size() ;
//         for(int i = 0 ; i< n ; i ++){
//             currSum+=arr[i] ;
            
//             maxi = max(currSum , maxi) ;
            
//             if(currSum<0 ){
//                 currSum = 0 ;
//             }
            
//         }
//         return maxi ;
//     }