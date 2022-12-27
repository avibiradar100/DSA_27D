// reverse  a string 

#include<iostream>
using namespace std;

int main(){

    string tmp;
    getline(cin,tmp);
    int i,j;
    for(i=0,j=tmp.size()-1;i<j;i++,j--){
        if(tmp[i]!=tmp[j])
          break;
    }
    if(i>=j)
      cout<<"Palindrome";
    else
      cout<<"Not Palindrome";
    return 0;
}


//time:  O(n)
//Space: O(1) 