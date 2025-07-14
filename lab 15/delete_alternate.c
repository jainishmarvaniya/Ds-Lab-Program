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


void delete_alternate(){
	
	if(L==NULL){
		printf("List is Empty");
	}
	else{
		struct node* curr = L;
		struct node *next = curr -> rptr;
		
		while(curr!=NULL && next != NULL){
			if(next == R){
				curr -> rptr = NULL;
				free(next);
				break;
			}
			curr -> rptr = next -> rptr;
			next -> rptr -> lptr = curr;
			
			free(next);
			
			curr = curr -> rptr;
			next = curr -> rptr;

			
		}
	}
}

void main(){
     insert_first();
	 insert_first();
	 insert_first();
	 insert_first();
	 insert_first();
	 insert_first();
	
	 printf("\n");
	
	 display();
	 printf("\n");
	
	 delete_alternate();
	 
	 display();
}
