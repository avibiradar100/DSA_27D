// Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.

// App1:
// Time: O(n^3)
// Space: O(1)

// App2: O(n^2)   using unorderd map 
// space:O(n)

//  bool find3Numbers(int A[], int n, int X)
//     {
//         //Your Code Here
//         unordered_map<int,int> ump;
//         for(int i=0;i<n;i++)
//             ump[A[i]]++;
//         for(int i=0;i<n;i++){
            
//             ump[A[i]]--;
//             for(int j=i+1;j<n;j++){
//                 ump[A[j]]--;
//                 int sum=A[i]+A[j];
//                 if(ump[X-sum] > 0)
//                   return true;
//                 ump[A[j]]++;
//             }
//             ump[A[i]]++;
//         }
//         return false;
//     }

// App3 : sorting 

// Time : O(nlogn+n^2)
// Space: O (1)

//  bool find3Numbers(int A[], int n, int X)
//     {
//         sort(A,A+n);
//         for(int i=0;i<n;i++){
//             int l=i+1;
//             int h=n-1;
//             while(l<h){
//                 if(A[i]+A[l]+A[h]==X){
//                     return true;
//                 }
//                 else if(A[i]+A[l]+A[h]<X){
//                     l++;
//                 }
//                 else{
//                     h--;
//                 }
//             }
//         }
//         return false;
//     }