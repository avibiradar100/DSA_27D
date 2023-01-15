// /***
//   method 1: sort the array--> O(nlogn) space-->O(n)
//   method 2: count the number of 0s,1s and 2s and put countwise in the array-->O(2n) space-->O(1)
//   method 3: dutch national flag algorithm--> O(n) space-->O(1)
// */
// // method 3 shown below

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n,i;
//     cin>>n;
//     int arr[n];
//     for(i=0;i<n;i++)
//         cin>>arr[i];
//     int st=0,mid=0,end=n-1;
//     while(mid<=end)
//     {
//         if(arr[mid]==0)
//             swap(arr[mid++],arr[st++]);
//         else if(arr[mid]==1)
//             mid++;
//         else
//             swap(arr[mid],arr[end--]);
//     }
//     for(i=0;i<n;i++)
//         cout<<arr[i]<<" ";   
//     return 0;
// }


