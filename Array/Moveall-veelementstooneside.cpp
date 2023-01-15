//Two pointer Approach--> O(n) space-->O(1)

// #include <bits/stdc++.h>
// using namespace std;

// int main() 
// {
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++)
// 	    cin>>arr[i];
// 	int st=0,end=n-1;
// 	while(st<end)
// 	{
// 	    if(arr[st]>0)
// 	    {
// 	        swap(arr[st],arr[end]);
// 	        end--;
// 	    }
// 	    else
// 	        st++;
// 	}
// 	for(int i=0;i<n;i++)
// 	    cout<<arr[i]<<" ";
// 	return 0;
// }
