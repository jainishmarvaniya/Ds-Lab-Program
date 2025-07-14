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

void swap(){
    int x;
    printf("Enter number = ");
    scanf("%d",&x);

    if(first==NULL){
        printf("List is empty");
    }
    else{
        
        struct node *pred_pred = NULL;
        struct node *pred = NULL;
        struct node *curr = first;
        struct node *next = first->link;
        struct node *temp;
        struct node *temp_curr;


        while(curr->link!=NULL && curr->info!=x){
            pred_pred=pred;
            pred=curr;
            curr = next;
            next = next->link;
        }

        if(curr->info!=x){
            printf("Node not found");
        }
        else{
            if(curr==first){
                temp=next->link;
                next->link=curr;
                curr->link=temp;
                first=next;
            }

            else if(curr->link==NULL){
                curr->link=pred;
                pred->link = NULL;
                pred_pred->link=curr;
            }

            else{
                temp_curr=curr;
                pred->link=next;

                temp = next->link;
                next->link=pred;
                pred->link=temp;

                if(pred_pred==NULL){
                    first=next;
                }
                else{
                    pred_pred->link=next;
                }
                

                temp_curr->link=pred;
                next->link=temp_curr;

            }
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
    insert();

    display();


    swap();
    printf("\n");
    display();

}