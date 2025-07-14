#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *link;
};

struct node *first=NULL;

void deleteAtLast(){
	if(first==NULL){
		printf("list is empty");
	}
	else{
		struct node *save=first;

		while(save->link !=NULL){
			save=save->link;
		}
		free(save);
	}
}

void main(){
    deleteAtLast();
}