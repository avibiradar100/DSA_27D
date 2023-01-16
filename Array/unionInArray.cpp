//App1:  take array of size n+m and add all elements of array 1 and array2 into it
// sort the new array and calculate unique elements into it

// Time: O(n+m log(n+m))
// Space: O(n+m)

// int doUnion(int a[], int n, int b[], int m)  {
//         //code here
//         vector<int> v;
        
//         for(int i=0;i<n;i++)
//           v.push_back(a[i]);
//         for(int j=0;j<m;j++)
//           v.push_back(b[j]);
        
//         sort(v.begin(),v.end());
        
//         int cnt=1;
//         for(int i=1;i<n+m;i++){
            
//             if(v[i]!=v[i-1])
//               cnt++;
//         }
//         return cnt;
//     }


//App2: Add all elements into the unordered_set 
// Time: O(n+m)
// space: O(n+m)