#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *first=NULL;
void insert()
{
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

void ins_gcd(){
    if(first==NULL){
        printf("list is empty: ");
    }
    else{
         struct node *save=first;

         while(save!= NULL && save->link!=NULL){
            int gcd;
            int min;

            if(save->info<save->link->info){
                min=save->info;
            }
            else{
                min=save->link->info;
            }

            for(int i=1;i<=min;i++){
                if(save->info % i==0 && save->link->info % i==0){
                      gcd=i;
                }
            }

            struct node *newnode=(struct node*) malloc(sizeof(struct node));
            newnode->info=gcd;
            
            newnode->link=save->link;
            save->link=newnode;

            save= save->link->link;
         }
    }
}

void display(){
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
    insert();

    display();
    printf("\n");
    ins_gcd();

    display();
}
