#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};
struct node *first = NULL;
struct node *first_copy = NULL;
   
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

void copyList()
{

    struct node *save = first;
    if (first == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        while (save != NULL)
        {
            struct node *newNode = (struct node *)malloc(sizeof(struct node));
            newNode->link = NULL;
            newNode->info = save->info;

            if (first_copy == NULL)
            {
                first_copy=newNode;
            }
            else
            {
                struct node* save_copy=first_copy;
                while (save_copy->link!=NULL)
                {
                    save_copy=save_copy->link;
                }
            
                save_copy->link=newNode;
            }
            save=save->link;
        }
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
void main()
{
    insert();
    insert();
    insert();
    insert();

    copyList();

    display(first);
    printf("\n");
    display(first_copy);
}