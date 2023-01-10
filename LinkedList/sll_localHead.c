#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}NODE;

// fn to create node
NODE* createNode(int data){

    NODE *a=(NODE*) malloc(sizeof(NODE));
    a->data=data;
    a->next=NULL;
    return a;
}

// fn to reterive last node address
NODE *getlastNode(NODE *a){

    if(!a)
      return NULL;
    while(a->next){
        a=a->next;
    }
    return a;
}

// fn to display slist
void display(NODE **st){

    NODE* a=*st;
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

int count(NODE **st){
    
    NODE* a=*st;
    int cnt=0;

    while(a){
        cnt++;
        a=a->next;
    }
    return cnt;
}

// fn to compute sum

int sum(NODE **st){
    
    NODE* a=*st;
    int sum=0;

    while(a){
        sum+=a->data;
        a=a->next;
    }
    return sum;
}

//fn to add new data at end
void addEnd(NODE **st,int data){

    NODE *a,*b;
    a=createNode(data);
    if(!*st)
      *st=a;
    else{
        b=getlastNode(*st);
        b->next=a;
    }
}

// fn to add new Node at Begin
void addBeg(NODE **st,int data){

    NODE *a=createNode(data);
    a->next=*st;
    *st=a;
}

// fn to find minimum from the slist

int findMin(NODE **st){

    NODE *a=*st;
    int min=a->data;
    while(a){
        if(a->data < min)
           min=a->data;
        a=a->next;
    }
    return min;
}

// fn to find maximum from the slist

int findMax(NODE **st){

    NODE *a=*st;
    int max=a->data;
    while(a){
        if(a->data > max)
           max=a->data;
        a=a->next;
    }
    return max;
}

// fn to delete first node

void delFirst(NODE **st){

    NODE *a=*st;
    if(!*st)
      return;
    *st=a->next;
    free(a);
}

// fn to delete last node

void delLast(NODE **st){

    NODE *a=*st;
    if(!a)
      return;
    if(!a->next){
        *st=NULL;
        free(a);
        return;
    }
    NODE *b=a;
    while(a->next){
       b=a;
       a=a->next;
    }
    b->next=a->next;
    free(a);
}



void main(){

    int d,opt;
    NODE *st=NULL;  //head pointer
    printf("\n Single Linked List");
    while(1){
      printf("\n\n\nMENU:\n1.add at end \n2.add at begin \n3.Display \n4.Count\n5.sum\n6.Maximum\n7.Minimum\n8.Delete First\n9.Delete last \n10.exit\noption:");
      scanf("%d",&opt);
      
      if(opt<1 || opt>9)
        break;
    
      switch(opt){
        case 1:
            printf("\nEnter data to add:");
            scanf("%d",&d);
            addEnd(&st,d);
            display(&st);
            break;
        case 2:
            printf("\nEnter data to add:");
            scanf("%d",&d);
            addBeg(&st,d);
            display(&st);
            break;
        case 3:
           display(&st);
           break;
        case 4:
           printf("\n\nTotal Nodes:%d",count(&st));
           break;
        case 5:
           printf("\n\nSum:%d",sum(&st));
           break;
        case 6:
           printf("\n\nMaximum:%d",findMax(&st));
           break;
        case 7:
           printf("\n\nMinimum:%d",findMin(&st));
           break;
        case 8:
           delFirst(&st);
           display(&st);
           break;
        case 9:
           delLast(&st);
           display(&st);
      }

    }
}

