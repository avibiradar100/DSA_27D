// Sliding Window Algorithm approach for solving this question

// count total elements <=k 
// make window of count size
//everytime and slide window and calculate the minimm swaps

//Time: O(n)
//space : O(1)

//  int minSwap(int arr[], int n, int k) {
//         // Complet the function
        
//         int cnt=0;
//         for(int i=0;i<n;i++){
//             if(arr[i] <= k)
//               cnt++;
//         }
        
//         int reqswaps=0;
//         for(int i=0;i<cnt;i++){
            
//             if(arr[i] > k)
//               reqswaps++;
//         }
//         int minswaps=reqswaps;
//         for(int i=1;i<=n-cnt;i++){
            
//             if(arr[i-1] > k)
//               reqswaps--;
//             if(arr[i+cnt-1] >k)
//               reqswaps++;
//             minswaps=min(minswaps,reqswaps);
//         }
//         return minswaps;
//     }