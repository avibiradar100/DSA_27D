//Given an array of size n and a range [a, b]. The task is to partition the array around the range such that array is divided into three parts.
// 1) All elements smaller than a come first.
// 2) All elements in range a to b come next.
// 3) All elements greater than b appear in the end.
// The individual elements of three sets can appear in any order. You are required to return the modified array.

// Approach: Time:O(n)  space:O(1)
// same as dutch national flag algorithm for sorting 0,1,2 (3 ptr approach)

//  void threeWayPartition(vector<int>& arr,int a, int b)
//     {
//         // code here 
//         int n=arr.size();
//         for(int st=0,mid=0,end=n-1;mid<=end;){
            
//             if(arr[mid]<a){
//                swap(arr[mid++],arr[st++]);
//             }
//             else if(arr[mid]>=a && arr[mid]<=b)
//               mid++;
//             else
//               swap(arr[mid],arr[end--]);
//         }
//         // for(int i=0;i<n;i++)
//         //   cout<<arr[i]<<" ";
//     }