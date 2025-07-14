#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};
struct node *first = NULL;

void insertAtStart()
{
    int x;
    printf("enter number = ");
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

void insertAtLast()
{
    int x;
    printf("\nenter number = ");
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
        struct node *save = first;

        while (save->link != NULL)
        {
            save = save->link;
        }
        save->link = newNode;
    }
}

void deleteAtStart()
{

    if (first == NULL)
    {
        printf("linked list is empty");
    }
    else
    {
        struct node *save = first;
        first = first->link;
        free(save);
    }
}
void deleteAtLast()
{
    if (first == NULL)
    {
        printf("linked list is empty");
    }
    else
    {
        struct node *pred = first;
        struct node *save = first->link;

        while (save->link != NULL)
        {
            pred = save;
            save = save->link;
        }
        pred->link = NULL;
        free(save);
    }
}

void delete(int x)
{
    if (first == NULL)
    {
        printf("linked list is empty");
    }
    else
    {
        struct node *pred = NULL;
        struct node *save = first;

        if (first->info == x)
        {
            first = save->link;
            free(save);
            return;
        }

        else
        {
            while (save != NULL && save->info != x)
            {
                pred = save;
                save = save->link;
            }

            if (save == NULL)
            {
                printf("node not found");
            }
            else
            {
                pred->link = save->link;
                free(save);
            }
        }
    }
}
void display()
{
    if (first == NULL)
    {
        printf("linked list is empty");
    }
    else
    {
        struct node *save = first;

        while (save != NULL)
        {
            printf("%d,", save->info);
            save = save->link;
        }
    }
}

void numberOfNode()
{
    int count = 0;

    struct node *save = first;

    while (save != NULL)
    {
        count++;
        save=save->link;
    }
    printf("Number Of Nodes = %d\n", count);
}
void main()
{
    int choise;
    int i=1;

    while(i){
        printf("\n\n<-----enter choise----->\n");
        printf("1.insert element at first\n");
        printf("2.insert element at last\n");
        printf("3.display element\n");
        printf("4.display number of element\n");
        printf("5.delete element at first\n");
        printf("6.delete element at last\n");
        printf("7.delete element specified position\n");
        printf("8.exit\n");

        scanf("%d",&choise);

        switch(choise){
            case 1:{
                insertAtStart();
                break;
            }    
            case 2:{
                insertAtLast();
                break;
            }
            case 3:{
                display();
                break;
            }
            case 4:{
                numberOfNode();
                break;
            }
            case 5:{
                deleteAtStart();
                break;
            }
            case 6:{
                deleteAtLast();
                break;
            }
            case 7:{
                printf("enter number which is delete = ");
                int number;
                scanf("%d",&number);
                delete(number);
                break;
            }
            case 8:{
                i=0;
            }

        }

    }
}