#include<stdio.h>
#include<stdlib.h>
#define MAX 5
 int stack_arr[MAX];
 int top=-1;
 void push(int);
 void print();
 void pop();
 int main(void)
 {
 push(1);
 push(2);
 push(3);
 push(10);//10 ka matalab 4place par 10 dalna
 push(5);
 print();
 pop();
  pop();
  print();
 }
 void push(int data)
 {if(top==MAX-1){
 printf("overflow");
 return;
}
top=top+1;
stack_arr[top]=data;
 }
void print()
{if(top==-1){
printf("over flow");
exit(1);
}
else{
	int i;
	for(i=0;i<=top;i++){
	printf("%d\n",stack_arr[i]);
}
printf("\n");
}
}
void pop()
{if(top==-1)
{printf("under flow");
exit(1);
}
stack_arr[top];
top=top-1;
}
