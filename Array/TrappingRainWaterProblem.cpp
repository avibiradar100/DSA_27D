// App1:  

    // time complexity - O(n^2)
    // space complexity -O(1)

// long long trappingWater(int arr[], int n){
//         // code here
//     int res=0,left,right;
//     for(int i=0;i<n;i++)
//     {
//         left=arr[i];
//         for(int j=0;j<i;j++)
//             left=max(left,arr[j]);
//         right=arr[i];
//         for(int j=i+1;j<n;j++)
//             right=max(right,arr[j]);
            
//         res+=(min(left,right)-arr[i]);
//     }
//     return res;
// }

// App 2:Reducing time complexity use in app1 by taking space
// 1. store for each element its previous highest bar and next highest bar
// 2. amount water store = min(previous highest bar,next -||-)-current height
// 3. repeat step 2 for each element 

//   Time : O(3n)
//   Space:O(2n)


// long long trappingWater(int arr[], int n){
//         // code here
//         vector<pair<int,int>> v(n);
        
//         int maxi=0;
//         for(int i=0;i<n;i++){
//             maxi=max(maxi,arr[i]);
//             v[i].first=maxi;
//         }
        
//         maxi=0;
//         for(int i=n-1;i>=0;i--){
//             maxi=max(maxi,arr[i]);
//             v[i].second=maxi;
//         }
        
//         long long total=0;
//         for(int i=0;i<n;i++)
//             total+=(min(v[i].first,v[i].second)-arr[i]);
//         return total;
//     }

// App3:
 
//  Reducing space complexity use in app1 by taking two variables

// Time: O(n)
// space: O(1)

// long long trappingWater(int arr[], int n){
//         // code here
        
//         int lmax=0,rmax=0,lo=0,hi=n-1;
//         long long total=0;
//         while(lo<=hi){
            
//             if(arr[lo] <= arr[hi]){
//                 lmax=max(lmax,arr[lo]);
//                 total+=(lmax-arr[lo]);
//                 lo++;
//             }
//             else{
//                 rmax=max(rmax,arr[hi]);
//                 total+=(rmax-arr[hi]);
//                 hi--;
//             }
//         }
//         return total;
//     }