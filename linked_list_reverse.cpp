#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
int main(){
       int n,i,value;
       printf("enter no.of nodes\n");
       scanf("%d",&n);
       struct node*head=NULL;
       for(i=0;i<n;i++){
       	scanf("%d",&value);
       	struct node*newnode=(struct node*)malloc(sizeof(struct node));
       	newnode->data=value;
       	newnode->next=head;
       	head=newnode;
	   }
	   struct node*temp=head;
	   while(temp)
	   {
	   	printf("%d",temp->data);
	   	temp=temp->next;
	   }
	   return 0;
}
