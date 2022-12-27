// reverse  a string 

#include<iostream>
using namespace std;

int main(){

    string tmp;
    getline(cin,tmp);
    for(int i=0,j=tmp.size()-1;i<j;i++,j--)
      swap(tmp[i],tmp[j]);
    cout<<"Reverse String:"<<tmp<<endl;
    return 0;
}


//time:  O(n)
//Space: O(1) 