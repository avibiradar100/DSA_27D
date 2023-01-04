#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr,int lb,int mid, int ub){

    int i=lb,j=mid+1,k=lb;
    vector<int> tmp(arr.size());
    while(i<=mid && j<=ub){

        if(arr[i]<=arr[j])
           tmp[k++]=arr[i++];
        else
           tmp[k++]=arr[j++];
    }
    while(i<=mid)
      tmp[k++]=arr[i++];
    while(j<=ub)
      tmp[k++]=arr[j++];

    for(int i=lb;i<=ub;i++)
      arr[i]=tmp[i];
    
}


void mergeSort(vector<int> &arr,int lb,int ub){

   if(lb<ub){

        int mid=lb+(ub-lb)/2;
        mergeSort(arr,lb,mid);
        mergeSort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
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
    
    mergeSort(arr,0,n-1);

    cout<<"after sorting"<<endl;
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";

    return 0;
}