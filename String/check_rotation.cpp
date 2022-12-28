// Check if given strings are rotations of each other or not


#include<iostream>
using namespace std;

int main(){

    string s1,s2;
    cin>>s1>>s2;
    if(s1.size()!=s2.size()){
      cout<<"Not Rotation";
      return 0;
    }
    int  k=s1.size();
    s1+=s1;
    int n=s1.size();
    for(int i=0;i<=n-k;i++){

      if(s1.substr(i,k)==s2){
        cout<<"Rotation";
        return 0;
      }
    }

    cout<<"Not Rotation";
    return 0;
}


//time:  O(n*n)
//Space: O(1) 