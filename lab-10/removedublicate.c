#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *first = NULL;

void insert()
{
    int x;
    struct node* newNode = (struct node *)malloc(sizeof(struct node));

    printf("Enter number = ");
    scanf("%d", &x);

    newNode->info=x;
    newNode->link=NULL;

    if (first == NULL)
    {
        first=newNode;
    }
    else
    {
        newNode->link = first;
        first = newNode;
    }
}

void delete_duplicate()
{

    if (first == NULL)
    {
        printf("List Is Empty");
    }
    else
    {

        struct node *save = first->link;
        struct node *pred = first;
        struct node *temp;
        while (save != NULL)
        {
            if (pred->info == save->info && save->link!=NULL)
            {
                pred->link = save->link;
                temp = save;
                save = save->link;
                free(temp);
            }
            else if(save->link==NULL){
                pred->link=NULL;
                temp=save;
                save=save->link;
                free(temp);
            }
            else
            {
                pred = save;
                save = save->link;
            }
        }

        save = first;

        while (save != NULL)
        {
            printf("%d,", save->info);
            save = save->link;
        }
    }
}

void main()
{
    int i=1;

    while(i){
        printf("\n<-----Enter choise----->\n");
        printf("1.insert element\n");
        printf("2.Delete Dublicate\n");
        printf("3.Exit\n");
        int choise;
        scanf("%d",&choise);
        

        switch(choise){
            case 1:{
                insert();
                break;
            }
            case 2:{
                delete_duplicate();
                break;
            }
            case 3:{
                i=0;
                break;
            }
            
        }
    }
}