//array prgram  traversal and insertion and deletion and linear search
#include<stdio.h>
void traversal (int a[],int size )//void travers (int *a,int size)
{int i,j;
for(i=0;i<size;i++)
{printf("travers=%d\n",a[i]);
printf("traverash=%d\n",*(a+i));
}	
}
void insertion(int a[],int size,int pos,int data)
{int i,j;
for(i=size-1;i>=pos-1;i--)
{a[i+1]=a[i];
}
a[pos-1]=data;
size++;
for(i=0;i<size;i++)
{printf("travers=%d",a[i]);
}
}
void deletion(int a[],int pos,int size)
{int i,j;
for(i=pos-1;i<=size-1;i++)
{a[i]=a[i+1];
}
size--;
for(i=0;i<size;i++)
{printf("travers=%d",a[i]);
}
}
void search(int a[],int element,int size)
{int i,k=0;
for(i=0;i<size;i++)
{if(a[i]==element)
{printf("found at =%d,array element=%d",i+1,a[i]);
k++;
}
}
if(k=0)
printf("not found");
}

void main ()
{int a[100];
int i,j,b,element,data;
printf("enetr the size of array:");
scanf("%d",&j);
printf("enter the element of arrray");
for (i=0;i<j;i++) 
{scanf("%d",&a[i]);
}
printf("enter your program what you want to do ");
printf("for travershal enter 1");
printf("for insertion press 2\n for deletion press 3\n for searching press 4");	
scanf("%d",&b);
switch(b){

case(1): {
traversal (a, j );
	break;
}
case (2) :{int pos;
printf("enter posistion");
scanf("%d",&pos);
printf("data");
scanf("%d",&data);
insertion(a,j, pos,data);
	break;
}
case (3) :{printf("enter posistion");int pos;
scanf("%d",&pos);
deletion(a,pos ,j);
	break;
}
case  (4):{printf("enter element");
scanf("%d",&element);
 search(&a[0],element,j);
	break;
}
}
}
