#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *link;
};
struct node *first=NULL;

void numberOfNode(){
	int count=0;
	struct node* save=first;
	
	while(save!=NULL){
		count++;
	}
	
	printf("number of node %d",count);
}

void main(){
    numberOfNode();
}