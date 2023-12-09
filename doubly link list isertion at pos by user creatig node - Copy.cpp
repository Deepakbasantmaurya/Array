#include <stdio.h>
#include <stdlib.h>
struct node{struct node*pre;
int data;
struct node*link;
};
struct node*at_the_end(struct node*head,int data)
{struct node*temp=(struct node*)malloc(sizeof(struct node));
temp->pre=NULL;
temp->data=data;
temp->link=NULL;
struct node *ptr=head;
while(ptr->link!=NULL){
	ptr=ptr->link;
}
ptr->link=temp;
temp->pre=ptr;
return head;
}
 struct node*at_the_pos(struct node*head,int pos,int data)
 {struct node*temp=(struct node*)malloc(sizeof(struct node));
temp->pre=NULL;
temp->data=data;
temp->link=NULL;
struct node *ptr=head;
pos--;
while(pos!=1)
{ptr=ptr->link;
pos--;
}
temp->link=ptr->link;
ptr->link->pre=temp;
ptr->link=temp;
temp->pre=ptr;
return head;
 }
int main()
{struct node*head=(struct node*)malloc(sizeof(struct node));
head->pre=NULL;
head->data=45;
head->link=NULL;
printf("enter the node number ");
int i,n,j;
scanf("%d",&n);
struct node*ptr=head;
for(i=2;i<=n;i++)
{printf("enter the data in%d node",i);
scanf("%d",&j);
ptr=at_the_end(ptr,j);
}ptr=head;
while(ptr!=NULL)
{printf("%d\n",ptr->data);
ptr=ptr->link;
}
ptr=head;
printf("enter the data for insertion");int data,pos;
scanf("%d",&data);
printf("enter the   position ");
scanf("%d",&pos);
ptr=at_the_pos(ptr,pos,data);
while(ptr!=NULL)
{printf("%d\n",ptr->data);
ptr=ptr->link;
}

}
