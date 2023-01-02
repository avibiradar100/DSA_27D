#include<iostream>
#include<vector>
using namespace std;

void selection(vector<int> &arr){

    int n=arr.size();
    for(int i=0;i<n;i++){

        int pos=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[pos])
               pos=j;
        }
        if(pos!=i)
         swap(arr[i],arr[pos]);
    }
}

int main(){

    int n;
    cout<<"\nEnter Array size:";
    cin>>n;
    cout<<"\nEnter Array Data:";
    vector<int> arr(n);
    for(int i=0;i<n;i++)
      cin>>arr[i];
    
    selection(arr);

    cout<<"after sorting"<<endl;
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";

    return 0;
}