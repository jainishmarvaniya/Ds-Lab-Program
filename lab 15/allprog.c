#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *lptr;
    struct node *rptr;
};

struct node *R = NULL;
struct node *L = NULL;

struct node* create_Node(){
    int x;
    printf("Enter number = ");
    scanf("%d",&x);

    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode -> info = x;
    return newNode;
}

void insert_first(){

    struct node *newNode = create_Node();

    if(L == NULL){
        newNode -> rptr = NULL;
        newNode -> lptr = NULL;
        R = L = newNode;
    }
    else{
        L -> lptr = newNode;
        newNode -> rptr = L;
        newNode -> lptr = NULL;
        L = newNode;
    }
}

void insert_last(){
    struct node *newNode = create_Node();

    if(R == NULL){
        newNode -> rptr = NULL;
        newNode -> lptr = NULL;
        L = R = newNode;
    }
    else{
        newNode -> rptr = NULL;
        newNode -> lptr = R;
        R -> rptr = newNode;
        R = newNode;
    }
}

void delete(){
    if(L==NULL){
        printf("List Is empty");
    }
    else{
        int x;
        printf("Enter number for delete = ");
        scanf("%d",&x);

        struct node *curr = L;

        while(curr != R && curr->info!=x){
            curr = curr -> rptr;
        }

        if(curr == R && curr -> info != x){
            printf("Node not found");
        }

        else{
            if(curr == L){
                L = curr -> rptr;
                L -> lptr = NULL;
            }
            else if(curr==R){
                R=curr->lptr;
                R->rptr=NULL;
            }
            else{
                curr->lptr->rptr = curr-> rptr;
                curr->rptr->lptr = curr-> rptr;
            }
            free(curr);
        }
    }
}

void insert_at_specified_position(){

    struct node *newNode = create_Node();

    if(L==NULL){

        newNode->lptr=NULL;
        newNode->rptr=NULL;

    }
    else{

        struct node *curr = L;
        int x = newNode -> info;

        while(curr != R && curr -> rptr -> info < x){
            curr = curr -> rptr;
        }

        if(curr==L){
            newNode->lptr=NULL;
            newNode->rptr=L;
            L->lptr = newNode;
            L=newNode;
        }
        else if(curr == R){
            newNode -> rptr = NULL;
            newNode -> lptr = R;
            R -> rptr = newNode;
            R = newNode;
        }

        else{
            newNode->rptr=curr->rptr;
            curr->rptr->lptr=newNode;
            newNode->lptr=curr;
            curr->rptr=newNode;
        }
    }
}

void display(){
    if(L==NULL){
        printf("List is empty");
    }
    else{
        struct node *curr = L;

       while(curr!=NULL){
        printf("%d, ",curr->info);
        curr=curr->rptr;
       }
    }
}

void main(){
    insert_last();
    insert_last();
    insert_last();
    insert_last();

    display();
    insert_at_specified_position();
    printf("\n");
    display();
    printf("\n");
    delete();
    display();


}
