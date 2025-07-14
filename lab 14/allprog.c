#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *first=NULL;
struct node *last=NULL;

struct node* create_node(){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    return newNode;
}

void insert_first(){
    int x;
    printf("Enter number = ");
    scanf("%d",&x);

    struct node *newNode = create_node();


    newNode->info=x;

    if(first==NULL){
        newNode->link=newNode;
        first=newNode;
        last = newNode;
    }
    else{
        newNode->link=first;
        last->link=newNode;
        first=newNode;
    }
}

void insert_last(){
    int x;
    printf("Enter number = ");
    scanf("%d",&x);

    struct node* newNode = create_node();
    newNode->info=x;

    if(last==NULL){
        newNode->link=newNode;
        first=last=newNode;
    }
    else{
        last->link=newNode;
        newNode->link=first;
        last=newNode;
    }
}

void insert_at_specified_position(){
    int x;
    printf("Enter number = ");
    scanf("%d",&x);

    struct node* newNode = create_node();
    newNode->info=x;

    if(first==NULL){
        newNode->link=newNode;
        first=last=newNode;
    }
    else{
        struct node* pred=NULL;
        struct node* curr=first;

        while(curr!=last && curr->link->info < x){
            curr=curr->link;
        }

        if(curr==first){
            newNode->link=first;
            last->link=newNode;
            first=newNode;
        }
        else if(curr==last){
            last->link=newNode;
            newNode->link=first;
            last=newNode;
        }
        else{
            newNode->link=curr->link;
            curr->link=newNode;
        }

    }
}

void delete_node(){
    int x;
    printf("Enter number = ");
    scanf("%d",&x);

    if(first==NULL){
        printf("list is empty");
    }
    else{
        struct node* pred=NULL;
        struct node* curr=first;

        while(curr!=last && curr->info != x){
            pred=curr;
            curr=curr->link;
        }

        if(curr==first){
            last->link=first->link;
            first=first->link;
        }
        else if(curr==last){
            pred->link=first;
            last=pred;
        }
        else{
            pred->link=curr->link;
        }

        free(curr);
    }
}

void display(){
    if(first==NULL){
        printf("List is empty");
    }
    else{
        struct node *curr = first;

        do
        {
            printf("%d, ",curr->info);
            curr=curr->link;
        } while (curr!=first);
        
    }
}

void main(){
    insert_first();
    insert_last();
    insert_last();
    insert_last();
    insert_last();

    display();

    insert_at_specified_position();
    insert_at_specified_position();
    insert_at_specified_position();

    display();
}


