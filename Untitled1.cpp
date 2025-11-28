#include<stdio.h>
int push(int value,int stack[],int top,int n){
	if(top==n-1){
		printf("stack is overflowed");
	}
	else{
		stack[top+1]=value;
		top=top+1;
	}
	return top;
}
void pop(int stack[],int top){
	int i=top;
	while(i!=-1){
		
	}
}
