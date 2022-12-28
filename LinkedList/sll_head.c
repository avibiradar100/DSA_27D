#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}NODE;

NODE *st=NULL;  //head pointer


// fn to create node
NODE* createNode(int data){

    NODE *a=(NODE*) malloc(sizeof(NODE));
    a->data=data;
    a->next=NULL;
    return a;
}

// fn to reterive last node address
NODE *getlastNode(){

    NODE* a=st;
    if(!a)
      return NULL;
    while(a->next){
        a=a->next;
    }
    return a;
}

// fn to display slist
void display(){

    NODE* a=st;
    if(!a){
        printf("Empty List");
        return;
    }

    printf("\n\nList Data:");
    while(a){
        printf("%4d",a->data);
        a=a->next;
    }
}

//fn to count nodes from the list

int count(){
    
    NODE* a=st;
    int cnt=0;

    while(a){
        cnt++;
        a=a->next;
    }
    return cnt;
}

// fn to compute sum

int sum(){
    
    NODE* a=st;
    int sum=0;

    while(a){
        sum+=a->data;
        a=a->next;
    }
    return sum;
}

//fn to add new data at end
void addEnd(int data){

    NODE *a,*b;
    a=createNode(data);
    if(!st)
      st=a;
    else{
        b=getlastNode();
        b->next=a;
    }
}

// fn to add new Node at Begin
void addBeg(int data){

    NODE *a=createNode(data);
    a->next=st;
    st=a;
}

// fn to find minimum from the slist

int findMin(){

    NODE *a=st;
    int min=st->data;
    while(a){
        if(a->data < min)
           min=a->data;
        a=a->next;
    }
    return min;
}

// fn to find maximum from the slist

int findMax(){

    NODE *a=st;
    int max=st->data;
    while(a){
        if(a->data > max)
           max=a->data;
        a=a->next;
    }
    return max;
}

void main(){

    int d,opt;
    printf("\n Single Linked List");
    while(1){
      printf("\n\n\nMENU:\n1.add at end \n2.add at begin \n3.Display \n4.Count\n5.sum\n6.Maximum\n7.Minimum\n8.exit\noption:");
      scanf("%d",&opt);
      
      if(opt<1 || opt>7)
        break;
    
      switch(opt){
        case 1:
            printf("\nEnter data to add:");
            scanf("%d",&d);
            addEnd(d);
            display();
            break;
        case 2:
            printf("\nEnter data to add:");
            scanf("%d",&d);
            addBeg(d);
            display();
            break;
        case 3:
           display();
           break;
        case 4:
           printf("\n\nTotal Nodes:%d",count());
           break;
        case 5:
           printf("\n\nSum:%d",sum());
           break;
        case 6:
           printf("\n\nMaximum:%d",findMax());
           break;
        case 7:
           printf("\n\nMinimum:%d",findMin());
      }

    }
}

