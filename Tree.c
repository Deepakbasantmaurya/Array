#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*left;
	struct node*right;
};
struct node*newnode(int data){struct node*p=(struct node*)malloc(sizeof(struct node));
p->data=data;
p->left=0;
p->right=0;
}
void print(struct node*node)
{if(node==0)
return;
print(node->left);
printf("%d",node->data);
print(node->right);
	
	}


int main()
{struct node*root=newnode(1);
struct node*child1=newnode(2);
struct node*child2=newnode(3);
root->left=child1;
root->left->left=newnode(4);
root->left->left->left=newnode(5);
root->right=child2;
//travershing tree;
print(root);
}
