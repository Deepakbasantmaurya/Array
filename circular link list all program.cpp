// Online C compiler to run C program online
/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
typedef struct node{int data;
struct node *link;
}node;
node*adatempty()
{node*first=(node*)malloc(sizeof(node));
 printf("enter the data while no node exist");
 scanf("%d",&first->data);
 first->link=first;
 return first;
}
 node*adatend(struct node* temp)
{ node*temp1=( node*)malloc(sizeof( node));
 printf("enter the data at end node ");
 scanf("%d",&temp1->data);
 node*p=temp;
 while(temp->link!=p){
     temp=temp->link;
 }
 temp->link=temp1;
          temp1->link=p;
          return p;
}
node*adatbeg(struct node* temp)
{ node*temp1=( node*)malloc(sizeof( node));
 printf("enter the data at first  node ");
 scanf("%d",&temp1->data);
 node*p=temp;
 while(temp->link!=p){
     temp=temp->link;
 }
 temp1->link=temp->link;
          temp->link=temp1;
          return temp1;
}
node*adatpos(node*temp)
{node*new=(node*)malloc(sizeof(node));
printf("enter the pos which pos you want to insert the data");int data,pos;
scanf("%d",&pos);
printf("enter the data ");
scanf("%d",&new->data);node*p=temp;
--pos;
while(pos!=1)
{temp=temp->link;
pos--;
}
new->link=temp->link;
temp->link=new;
}



void display(struct node *ptr)
{node*p=ptr->link;
do{printf("%d->",ptr->data);
ptr=ptr->link;
}while(ptr->link!=p);}

 int main()
 { node *head;
 head=adatempty();
 node* ptr=head;
 printf("enter the node size how much you want ");
 int n;scanf("%d",&n);int i;
 for(i=0;i<n;i++)
 {
 ptr=adatend(ptr);
 } display(head);
     head=adatbeg(head);
     display(head);
     adatpos(head);
      display(head);
 }
 
 



