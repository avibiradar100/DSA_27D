#include<iostream>
#include<cstdlib>
using namespace std;

class student{

    string name;
    int age;
    public:

    student(string name="noname",int age=0){
        this->name=name;
        this->age=age;
    }

    void getDetails(){
      cout<<"\nI am "<<name<<" and My age is: "<<age<<endl;
    }

    //Overloading of new operator
    void* operator new(size_t size){

        cout<<"\nOverloading of new operator with size:"<<size<<endl;
        void *ptr=malloc(size);
        return ptr;

    }
    //Overloading of Delete Operator
    void operator delete(void *ptr){

        cout<<"\nOverloading of Delete operator";
        free(ptr);
        return;
    }
};

int main(){

    student *s=new student("Avinash biradar",20);
    s->getDetails();
    delete s;
}