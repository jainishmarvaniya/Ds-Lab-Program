#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *link;
};

struct node *first=NULL;

void insertAtLast(){
	int x;
	
	printf("Enter a number: ");
	scanf("%d",&x);
	
	struct node *newnode=(struct node *) malloc(sizeof(struct node));
	
	newnode->info=x;
	newnode-> link= NULL;

	if(first==NULL){
		first=newnode;
	}
	else{
		struct node *save=first;

		while(save-> link!=NULL){
			save=save->link;
		}
		save->link=newnode;
		
	}
	 
}

void main(){
    insertAtLast();
}