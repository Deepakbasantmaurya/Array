#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define MAX 100
char stack[MAX],postfix[MAX],infix[MAX];
int top=-1;
char pop();
void push(char c)
{if(isfull())
{printf("\noverflow");
return;
}
else
{top++;
stack[top]=c;
}
}
int precedence(char c)
{switch(c)
{
 case'^':
	return 3;
 case '*':
	case'/':
		return 2;
		case'+':
		case'-':
			return 1;
			default:
			return 0;
}
}
int isempty()
{if(top==-1)
return 1;
else
return 0;
}
int space(char c)
{if(c==' '||c=='\t')
return 1;
else 
return 0;
}
void intopost()
{int i,j=0;
char next;
char symbol;
for(i=0;i<strlen(infix);i++)
{symbol=infix[i];
if(!space(symbol))
{
	switch(symbol)
	{
		case '(':
			push(symbol);
			break;
	    case ')':
	    	while((next=pop())!='(')
	    	{
	    	postfix[j++]=next;
	    }
	    break;
	    case '+':
	     case'-':
	     case'*':
	    case'/':
	    case'^':
	    	while(!isempty()&&precedence(stack[top])>=precedence(symbol))
	    	   		{postfix[j++]=pop();
	    	   	 			}
	    	   	 			push(symbol);
	    	   	 			break;
	    	default:
	    		postfix[j++]=symbol;
				
	    	
	}
}
}
	while(!isempty())
	{postfix[j++]=pop();
	postfix[j]='\0';
	}


}

void print( )
{int i=0;
while(postfix[i]!='\0')
{
printf("%c",postfix[i]);
i++;
}
printf("\n");
}
char pop()
{if(isempty())
{printf("underflow");
return 1;
}
else
{return stack[top--];

}
}
int isfull()
{if(top==MAX-1)
{return 1;
}
else
return 0;
}

int main()
{printf("Enter the expression");
gets(infix);
intopost();
printf("postfix expression is=");
print();
return 0;
}

