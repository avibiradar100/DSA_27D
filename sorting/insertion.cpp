#include<iostream>
#include<vector>
using namespace std;

void insertion(vector<int> &arr){

    int n=arr.size();
    for(int i=1;i<n;i++){
      int tmp=arr[i],j;
      for(j=i-1;j>=0 && tmp < arr[j];j--)
        arr[j+1]=arr[j];
      arr[j+1]=tmp;
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
    
    insertion(arr);

    cout<<"after sorting"<<endl;
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";

    return 0;
}