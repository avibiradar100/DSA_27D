/********App1
        Kadane's Algorithm-->O(n)
        space: O(1)
******/

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//         cin>>arr[i];
//     int max_till=INT_MIN,curr_sum=0,start=0,end=0,s=0;
//     for(int i=0;i<n;i++)
//     {
//         curr_sum+=arr[i];
//         if(max_till<curr_sum)
//         {
//             max_till=curr_sum;
//             start=s;
//             end=i;
//         }   
//         if(curr_sum<0)
//         {
//             curr_sum=0;
//             s=i+1;
//         }   
//     }
//     cout<<"Maximum Sum is: "<<max_till<<"\nFrom Index "<<start<<" to "<<end;
// }


/*******
       App2
       Time-->O(n)
       Space--> O(1)
******/

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//         cin>>arr[i];
//     int max_till=INT_MIN,curr_sum=0;
//     for(int i=0;i<n;i++)
//     {
//         curr_sum=max(arr[i],curr_sum+arr[i]);
//         max_till=max(curr_sum,max_till);
//     }
//     cout<<"Maximum Sum is: "<<max_till;
// }


