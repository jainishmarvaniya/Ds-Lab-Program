#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *first1=NULL,*last1=NULL;
struct node *first2=NULL,*last2=NULL;

void insert(){
    int x;
    printf("Enter number = ");
    scanf("%d",&x);

    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->info=x;

    if(last1==NULL){
        newNode->link=newNode;
        first1=last1=newNode;
    }
    else{
        last1->link=newNode;
        newNode->link=first1;
        last1=newNode;
    }
}

void display(struct node *first,struct node *last){
    if(first==NULL){
        printf("List is Empty");
    }
    else{
        struct node* curr=first;

        do
        {
            printf("%d, ",curr->info);
            curr=curr->link;
        } while (curr!=first);
        
    }
}

void split_list(){
    int x;
    printf("Enter number for split list = ");
    scanf("%d",&x);

    if(first1==NULL){
        printf("List is empty");
    }
    else{
        struct node *pred=NULL;
        struct node *curr = first1;

        while(curr!=last1 && curr->info!=x){
            pred=curr;
            curr=curr->link;
        }

        if(curr==last1 && curr->info!=x){
            printf("Number not found");
        }
        else{
            if(curr==first1){
                first1=curr->link;
                last1->link=first1;
                curr->link=curr;
                first2=last2=curr;
            }
            else if(curr==last1){
                pred->link=first1;
                last1=pred;

                curr->link=curr;
                first2=last2=curr;
            }
            else{
                first2=curr;
                last2=last1;

                pred->link=first1;
                last1=pred;

                last2->link=first2;
            }
        }
    }
}

void main(){
    insert();
    insert();
    insert();
    insert();
    insert();
    insert();
    
    display(first1,last1);

    split_list();
    printf("\n");
    display(first1,last1);
    printf("\n");
    display(first2,last2);
}