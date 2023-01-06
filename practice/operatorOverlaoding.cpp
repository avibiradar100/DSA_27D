/*Overloading of << and >> operator**/

#include <iostream>
using namespace std;

class Complex{
    
    int a,b;
    public:
        Complex(int x=0,int y=0){
            a=x;
            b=y;
        }
        
        void display(){
            cout<<"\nValues:"<<a<<" "<<b<<endl;
        }
        
        friend ostream& operator<<(ostream&,Complex&);
        friend istream& operator>>(istream&,Complex&);
        
};

ostream& operator<<(ostream& out,Complex& obj){
    
    out<<obj.a<<" "<<obj.b<<endl;
    return out;
}

istream& operator>>(istream& in,Complex& obj){
    
    in>>obj.a>>obj.b;
    return in;
}

int main()
{
    Complex c1;
    cin>>c1;
    cout<<c1;
    return 0;
}
