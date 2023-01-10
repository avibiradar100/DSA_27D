#include<iostream>
#include<cstring>
using namespace std;

class String{

    unsigned int len=0;
    char* res=nullptr;
  public:
    String():len(0),res(nullptr){} //const and reference varaible becuase initialize only once 
    
    String(const char* str){
        len=strlen(str);
        res=new char[len+1];
        strcpy(res,str);
    }

    String(const String& obj){

        len=obj.len;
        res=new char[len+1];
        strcpy(res,obj.res);
    }

    String& operator=(String str){

        // CAS --> Copy and Swap idiom
        Swap(*this,str);
        // if(this!=&str){

        //     char *tmp=res;
        //     len=str.len;
        //     res=new char[len+1];
        //     strcpy(res,str.res);
        //     delete[] tmp;
        // }
        return *this;
    }

    String(String&& str){

        len=str.len;
        res=str.res;
        str.res=NULL;
        str.len=0;
    }

    ~String(){

        if(res){

            delete[] res;
            res=nullptr;
            len=0;
        }
    }

    void Swap(String& st1,String& str2){
        
        std::swap(st1.res,str2.res);
        std::swap(st1.len,str2.len);
    }

    int size(){

        return len;
    }

    friend ostream& operator<<(ostream&,String&);
    friend istream& operator>>(istream&,String&);

};

ostream& operator<<(ostream& out,String& str){

    out<<str.res;
    return out;
}

istream& operator>>(istream& in,String& str){

    in>>str.res;
    return in;
}

int main(){

    String str("sample");  // default constructor
    cin>>str;  // operator overloading of >>
    cout<<"\nStr:"<<str; //operator overloading of <<
    String str2="avinash"; // string str("Avinash"); parameterized constructor
    cout<<"\nStr2:"<<str2;
    String str3=str;  // copy constructor
    cout<<"\nStr3:"<<str3;
    str3=str2;    //copy assignment operator 
    cout<<"Str3:"<<str3;

    int n=str.size();
    cout<<"\nsize:"<<n<<endl;

    String str5=std::move(str2); 
    cout<<"\nStr5:"<<str5;
    cout<<"\nStr2:"<<str2;
    return 0;
}