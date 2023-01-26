#include<iostream>
using namespace std;

struct trieNode{

    struct trieNode *arr[26];
    bool endofWord;
};

trieNode* getNode(){

    trieNode* newnode=new trieNode;
    for(int i=0;i<26;i++)
      newnode->arr[i]=NULL;
    newnode->endofWord=false;
    return newnode;
}

void add(trieNode *t,string str){

    trieNode *tmp=t;
    int n=str.size();
    for(int i=0;i<n;i++){

        if(tmp->arr[str[i]-'a']==NULL)
          tmp->arr[str[i]-'a']=getNode();
        tmp=tmp->arr[str[i]-'a'];  
    }
    tmp->endofWord=true;
}

bool search(trieNode *t,string str){

    int n=str.size();
    for(int i=0;i<n;i++){

        if(t->arr[str[i]-'a']==NULL)
           return false;
        t=t->arr[str[i]-'a'];
    }
    return t->endofWord;
}


int main(){

    int opt;
    cout<<"\nTrie";
    trieNode* t=getNode();
    string str;
    while(1){
        cout<<"\n\nMenu:\n1.Add\n2.search\n3.exit\nopt:";
        cin>>opt;
        if(opt<1 || opt>2)
          break;
        switch(opt){

            case 1:
               cout<<"\n\nEnter word to Add:";
               cin>>str;
               add(t,str);
               break;
            case 2: 
               cout<<"\n\nEnter word to Search:";
               cin>>str;
               if(search(t,str))
                cout<<"Yes Found";
               else
                cout<<"Not Found";
        }
    }
    return 0;
}

