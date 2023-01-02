#include<iostream>
#include<vector>
using namespace std;

void bubble(vector<int> &arr){

    int n=arr.size();
    bool flg=1;
    for(int i=0;i<n;i++){

        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
               swap(arr[j],arr[j+1]);
               flg=0;
            }
        }
        if(flg)
          break;
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
    
    bubble(arr);

    cout<<"after sorting"<<endl;
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";

    return 0;
}