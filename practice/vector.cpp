//vector implementation
#include<iostream>
using namespace std;

template<class T>

class Vector{
    
    int size;
    int capacity;
    T* ptr;
  public:
    
    //default constructor
    Vector(){
        size=capacity=0;
        ptr=nullptr;
    }
    
    //parameterized constructor
    Vector(int n,const T& init){
        
        size=capacity=n;
        ptr=new T[n];
        for(int i=0;i<n;i++)
           *(ptr+i)=init;
    }
    
    //copy constructor
    Vector(const Vector<T>& obj){
        
        capacity=obj.capacity;
        size=obj.size;
        ptr=new T[capacity];
            
        for(int i=0;i<size;i++)
            ptr[i]=obj.ptr[i];
    }
    
    //destructor
    ~Vector(){
        if(ptr)
            delete []ptr;
        size=capacity=0;
    }
    
    // overloading of [] operator
    T& operator [](int index){
        
        if(index<0 || index>=size){
            cout<<"\nInvlaid Index";
            exit(0);
        }
        return ptr[index];
    }
    
    // push_back function
    void push_back(const T& val){
        
        if(size==capacity){
            if(capacity)
                capacity=2*size;
            else
              capacity=1;
            T* newPtr=new T[capacity];
            
            for(int i=0;i<size;i++)
              newPtr[i]=ptr[i];
              
            std::swap(newPtr,ptr);
            
            delete[] newPtr;
        }
        
        ptr[size]=val;
        size++;
    }
    
    // Overloading assignment operator
    
    Vector<T>& operator=(const Vector<T>& obj) {
        
        if (this != &obj) { // self-assignment check
            delete[] ptr;
            capacity = obj.capacity;
            size = obj.size;
            ptr = new T[capacity];
            for (int i = 0; i < size; i++) {
                ptr[i] = obj.ptr[i];
            }
        }
        return *this;
    }

    int Size(){ return size;}
};

int main(){
    
    Vector<int> v;  // default constructor
    Vector<int> v1(20,0); // parametarized constructor
    
    for(int i=0;i<20;i++){
      v.push_back(i);         
      v1[i]=i;              // overloading of [] operator
    }
    
    Vector<int> v2=v1,v3;     // copy constructor
    v3=v2;               // copy assignment operator
    
    for(int i=0;i<v3.Size();i++)
      cout<<v3[i]<<endl;
      
    return 0;
}