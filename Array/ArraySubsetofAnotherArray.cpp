// Array Subset of another array
// Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m. Task is to check whether a2[] is a subset of a1[] or not. Both the arrays can be sorted or unsorted.

// App1: check each element of b is present is a or not if present make it negative so that we can handle duplicateness 

// Time : O(m*n)   where m is b array size and n is a array size
// Space: O(1)

// // App 2: use unorderd_map to store elements of array a and just check by looking in map whether array b element present or not

// Time : O(n)
// Space: O(n)

// string isSubset(int a1[], int a2[], int n, int m) {
    
//     string ans="No";
    
//     unordered_map<int,int> ump;
//     for(int i=0;i<n;i++)
//       ump[a1[i]]++;
     
//     for(int j=0;j<m;j++){
        
//         if(!ump[a2[j]])
//           return ans;
//         ump[a2[j]]--;
//     }
//     ans="Yes";
//     return ans;
// }

