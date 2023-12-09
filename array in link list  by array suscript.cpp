#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node*link;
} node;
int main()
{int i;
	node head[4],second[4];
//int i;node*head=(struct node*)calloc(4,sizeof(node));
//node*second=(node*)malloc(4*sizeof(node));  
  //head[0].data=1;//we could not apply arrow because array is also pointer means *(head+i).data ya (head+i->data
(head+0)->data=1;
//*(head).data=1;
head[0].link=0;
head[1].data=2;
head[1].link=&head[0];
//ere no need toeneter adrees of first array box because malloc give memory in contigious memory alloction just like array
head[2].data=4;
head[2].link=0;
head[3].data=5;
head[3].link=second;//&second[0]ya &(*second+0)//but heare is complsary becase second was a seprat array node
second[0].data=6;
//second[0].link=0;//there is no need in enter the adress or vale 
second[1].data=7;
second[1].link=0;
second[2].data=8;
second[2].link=0;
second[3].data=9;
second[3].link=0;
node*ptr=&head[0];
for(i=0;ptr!=0;i++)
{printf("%d\n",ptr[i].data);
if(i==3)
{
ptr=ptr[i].link;
i=-1;
}
}
}
