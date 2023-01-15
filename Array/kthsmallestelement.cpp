/*********
     method 1: sort and return the kth Element --> O(nlogn)  space--> O(n)
     methid 2: use ordered map in stl and count frequencies till it becomes kth-->O(Nlogn)
     method 3: use min heap or max heap-->O(n+klogn)
     method 4: use Quicksort till kth pivot element-->   worst-->o(n^2) average-->O(n)
     
****/
// App1:
// int kthSmallest(int arr[], int n,int k) {
//         //code here
//         sort(arr,arr+n);
//         return arr[k-1];
// }

//App3:

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n,m,k;
//     priority_queue<int,vector<int>,greater<int>> pq;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>m;
//         pq.push(m);
//     }
//     cout<<"Enter k:";
//     cin>>k;
//     for(int i=1;i<k;i++)
//         pq.pop();
//     cout<<k<<"th Smallest Element: "<<pq.top();

//     return 0;
// }

