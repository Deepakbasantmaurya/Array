#include<stdio.h>
#define max 5
int  front=-1;
int raer=-1;
int queue[max];
void enque(int x)
{if(raer==max-1)
{printf("overflow");
}
else if (raer==-1&&front==-1)
{raer=front=0;
queue[raer]=x;
}
else 
{raer++;
queue[raer]=x;
}
}
void print()
{int i ;
for(i=front;i<raer+1;i++)
{printf("%d\n",queue[i]);
}
}
void deque()
{if(raer==-1&&front==-1)
{printf("underflow");
}
else
{printf(" deleted value is %d\n",queue[front]);
front++;//because que is follow the rule of fifo when we increment front ++ index first was skiped means first value are deleted 
queue[front];
}
}

void main()
{enque(6);
enque(8);
enque(3);
deque();
print();
}
