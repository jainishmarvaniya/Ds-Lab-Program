#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node* first=NULL;

void insert(){
     
    int x;
    printf("Enter Number = ");
    scanf("%d", &x);

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = x;
    newNode->link = NULL;

    if (first == NULL)
    {
        first = newNode;
    }
    else
    {
        newNode->link = first;
        first = newNode;
    }
}

void reverselinkedlist(){
    struct node *prev=NULL;
    struct node *save=first;
    struct node *next=NULL;

    if(first==NULL){
        printf("list is empty");
    }
    else{
      while(save!=NULL){
         next= save->link;
         save->link=prev;
         prev=save;
         save=next;
      }
        first=prev;
    }   
}

void display(struct node* first){
    if(first==NULL){
        printf("\nList is empty\n");
    }
    else{
        struct node* save=first;

        while(save!=NULL){
            printf("%d,",save->info);
            save=save->link;
        }
        printf("\n");
    }
}



void main(){
     insert();
     insert();
     insert();
     display(first);

    
     reverselinkedlist();
     display(first);
}