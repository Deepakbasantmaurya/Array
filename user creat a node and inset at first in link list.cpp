#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node{int data;
struct node* link;//we take the variable user_defind data type data because its contain(point) the two part 1is data {int float,char depend you}2nd is adressof next node;;
};
void ad_at_pos(struct node *ptr,int data,int pos){
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->link=NULL;
	--pos;
		while(pos!=1)
		{ptr=ptr->link;
		pos--;
		}
		temp->link=ptr->link;
		ptr->link=temp;
}
struct node* ad_at_end(struct node *ptr,int data)
{struct node *temp=(struct node*)malloc(sizeof(struct node));
temp->data=data;
temp->link=NULL;
//while(ptr->link!=NULL){ptr=ptr->link;
//} yaha loop isliye nahi lagaya gaya hai ki tim coplexicity badh jati h
ptr->link=temp;//yaha par  hume node ka end pata hai thats reson we can not use loop;

return temp;

} 
struct node *ad_at_first(struct node*ptr,int info)
{struct node*temp=(struct node*)malloc(sizeof(struct node));
temp->data=info;
temp->link=ptr;
ptr=temp;//for making a first node
return ptr;
}
int main(){struct node* head,*second,*third;
head=(struct node*)malloc(sizeof(struct node)); //creat the heap by dynamic memory allocation
head->data=45;//*head.data=45; dot is the operator
head->link=NULL;
second=(struct node*)malloc(sizeof(struct node));//there are no need to type casting ;hear second memory are created  
second->data=77;
head->link=second;

third=(struct node*)malloc(sizeof(struct node));//there are no need to type casting ;hear second memory are created  
second->link=third;
third->data=66;
third->link=NULL;//third ke link me null ko put kiya gaya
struct node* ptr;
//printf("enter inserting data at end data");
int data,data2,r,i;
//scanf("%d",&data2);
struct node * str=third;//third is the last node we know that;
printf("how much you want to creat a node except privious three node enter number\n");
scanf("%d",&r);
for(i=1;i<=r;i++){printf("enter inserting data at end data");
scanf("%d",&data2);
str=ad_at_end(str,data2);
}str=head;//for safing of head
while(str!=NULL){printf("%d\n",str->data);
str=str->link;
}
printf("enter the data at first node insertion\n");
scanf("%d",&data);
head= ad_at_first(head,data);
ptr=head;
while(ptr!=NULL){printf("%d\n",ptr->data);
ptr=ptr->link;
} int pos;
printf("ennter the the data in middle of the node enter position");
scanf("%d%d",&pos,&data);
ad_at_pos(head,data,pos);
ptr=head;
while(ptr!=NULL){printf("%d\n",ptr->data);
ptr=ptr->link;
} 
}

