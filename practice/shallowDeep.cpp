#include<iostream>
using namespace std;

class Base{

    int data;
    int* ptr;

    public:

        Base(): data(0),ptr(new int(0)){}

        // Base(Base& obj){

        //     ptr=new int;
        //     *ptr=*obj.ptr;
        //     data=obj.data;
        // }   

        ~Base(){
            cout<<"\nDestructor Called\n";
            delete ptr;
        }

        void setPtr(int val){
            // cout<<"\nptr address"<<ptr<<endl;
            *ptr=val;
        }
        void setData(int val){data=val;}
        int getPtr(){return *ptr;}
        int getData(){return data;}

};

int main(){

    Base obj1;
    obj1.setPtr(10);
    obj1.setData(15);
    Base obj2=obj1;
    obj2.setPtr(30);
    cout<<"obj1 ptr:"<<obj1.getPtr()<<endl;
    cout<<"obj1 data:"<<obj1.getData()<<endl;
    cout<<"obj1 ptr:"<<obj2.getPtr()<<endl;
    cout<<"obj2 data:"<<obj2.getData()<<endl;

    return 0;
}