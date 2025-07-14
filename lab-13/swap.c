#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *first=NULL;

void insert(){
    int x;
    printf("enter element = ");
    scanf("%d",&x);

    struct node *newNode = (struct node*)malloc(sizeof(struct node));

    newNode->info=x;
    newNode->link=first;
    first=newNode;
}

void swap_consecutive_node(){

    if(first==NULL){
        printf("List is empty");
    }
    else{
       struct node *pred=NULL;
       struct node *curr = first;
       struct node *next=first->link;
       struct node *temp;

        while(curr!=NULL && curr->link!=NULL){
            next = curr->link;
            temp=next->link;


            next->link=curr;
            curr->link = temp;

            if(curr==first){
                first=next;
            }
            else{
                pred->link=next;
            }
            pred = curr;
            curr = temp;
        }   
        
    }
}

void display(){
    if(first==NULL){
        printf("<-----List is empty----->");
    }
    else{
        struct node *save = first;
        while(save!=NULL){
            printf("%d,",save->info);
            save = save->link;
        }
    }
}

void main(){
    insert();
    insert();
    insert();
    insert();

    display();

    swap_consecutive_node();

    printf("\n");
    display();
}