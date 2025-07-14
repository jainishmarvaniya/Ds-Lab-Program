#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *link;
};

struct node *first;
struct node *second;
struct node *third;

struct node *first=NULL;

void insertAtFirst(){
	int x;
	
	printf("Enter a number: ");
	scanf("%d",&x);
	
	struct node  *newnode=(struct node *) malloc(sizeof(struct node)); // create new node
	
	newnode->info=x;
	newnode->link=first;
	
	first=newnode;

	printf("%d",*first);
	
}

void display(){
	struct node *save=first;

	while(save!=NULL){
		printf("%d",save->info);
		save=save->link;
	}
}

int main(){

	first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    // for first
    first->link = second;
    first->info = 10;

    // for second
    second->link = third;
    second->info = 20;

    // for third
    third->link = NULL;
    third->info = 30;
	insertAtFirst();
	display();
}
