#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *link;
};

struct node *first=NULL;

void deleteAtStart(){
	if(first==NULL){
		printf("list is empty");
	}
	else{
		struct node *save=first;
		first=first->link;
		free(save);
	}
}

void main(){
    deleteAtStart();
}