#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *link;
};

struct node *first=NULL;


void display(){
	if(first==NULL){
		printf("List is Empty");
	}
	else{
		struct node* save=first;
		
		while(save!=NULL){
			printf("%d",save->info);
			save=save->link;
		}
	}
}

void main(){
    display();
}