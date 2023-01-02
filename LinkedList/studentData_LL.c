#include<stdio.h>
#include<stdlib.h>

typedef struct student{
    int rno;
    char nm[20];
    int mrk;
}stu;

typedef struct node{
    stu data;
    struct node *next;
}Node;

Node *st=NULL;

void input(stu *a,int no){

    a->rno=no;
    printf("\nEnter Name:");
    scanf("%s",a->nm);
    printf("\nEnter Marks:");
    scanf("%d",&a->mrk);
}

void display(stu *a){

    printf("\n%5d %15s %5d",a->rno,a->nm,a->mrk);
    return;
}

//fn to create Node
Node* createNode(int no){

    Node *a=(Node*) malloc(sizeof(Node));
    input(&a->data,no);
    a->next=NULL;
    return a;
}

// fn to search record numberwise return address if found else NULL
Node* search(int no){

    Node *a=st;
    while(a){
        if(a->data.rno==no)
         return a;
        a=a->next;
    }
    return a;
}

// fn to add new student record
void add(){
  
  int no;
  printf("\nEnter Roll No:");
  scanf("%d",&no);
  if(search(no)){
    printf("\nRecord already Exists...");
    return;
  }

  Node *a=createNode(no);
  a->next=st;
  st=a;
}

// fn to modify existing student record
void mod(){
  
  int no;
  printf("\nEnter Roll No:");
  scanf("%d",&no);
  Node *a=search(no);
  if(!a){
    printf("\nRecord Not Exists...");
    return;
  }
  input(&a->data,no);
  return;

}

//fn to delete node from the list
void del(){

    Node *a,*b;
    int no;
    printf("\nEnter Roll No:");
    scanf("%d",&no);
    a=search(no);
    if(!a){
        printf("\nRecord Not Exists...");
        return;
    }
    if(a==st)
      st=a->next;
    else{
        b=st;
        while(b->next!=a)
            b=b->next;
        b->next=a->next;
    }
    free(a);
}

// fn to display all the records from the list
void dis(){

    Node *a=st;
    if(!a){
        printf("\nEmpty List");
        return;
    }
    printf("\n Student List data");
    while(a){

        display(&a->data);
        a=a->next;    
    }
}

void main(){

    int d,opt;
    printf("\n Student Linked List");
    while(1){
      printf("\n\n\nMENU:\n1.add student Data \n2.Modify student Data  \n3.Delete Student data \n4.Display student Data\n5.exit\noption:");
      scanf("%d",&opt);
      
      if(opt<1 || opt>4)
        break;
    
      switch(opt){
        case 1:
            add();
            break;
        case 2:
            mod();
            break;
        case 3:
           del();
           break;
        case 4:
           dis();
      }

    }
}