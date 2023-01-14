//Time : O(nlog n+n)
// space: O(1)

// app: sorting+ sliding window window size = no of students


//  long long findMinDiff(vector<long long> a, long long n, long long m){
//     //code
        
//         sort(a.begin(),a.end());
        
//         long long ans=INT_MAX;
        
//         for(int i=0;i+m<n+1;i++)
//           ans=min((a[i+m-1]-a[i]),ans);
//         return ans;
//     }   