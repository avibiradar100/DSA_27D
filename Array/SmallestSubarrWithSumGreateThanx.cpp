// Time : O(n)
//Space: O(1)

// Approach: two pointer appproach or sliding window approach

// 1. add in sum till it become greater than x 
// 2. after that  it become greater remove from start till it greater than x
// 3. minwhile keep udating the window size

//  int smallestSubWithSum(int arr[], int n, int x)
//     {
//         // Your code goes here   
        
//         int sum=0,ans=INT_MAX;
//         for(int st=0,ed=0;ed<n;ed++){
            
//             sum+=arr[ed];
//             while(sum > x){
//               ans=min(ans,ed-st+1);
//               sum-=arr[st++];
//             }
//         }
//         return ans;
//     }