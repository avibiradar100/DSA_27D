/******************************************************************************
 * Stack implementation
*******************************************************************************/

#include <iostream>
using namespace std;
#define size 10

template <class T>

class Stack{
    
    int top;
    T arr[size];
    
  public:
    Stack():top(-1){}
    
    bool isFull(){
        
        if(top==size)
          return 1;
        return 0;
    }
    
    bool empty(){
        
        if(top==-1)
          return 1;
        return 0;
    }
    
    void push(const T& val){
        
        if(isFull())
          cout<<"\nStack full";
        else
          arr[++top]=val;
    }
    
    void pop(){
        
        if(empty())
          cout<<"\nEmpty Stack";
        --top;
    }
    
    int Top(){
        
        return arr[top];   
    }
};

int main()
{
    Stack<int> s;
    for(int i=0;i<5;i++)
        s.push(i);
    cout<<s.Top()<<endl;
    s.pop();
    s.pop();
    while(!s.empty()){
      cout<<s.Top()<<endl;
      s.pop();
    }
    return 0;
}
