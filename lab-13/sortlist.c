#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *first = NULL;
int number_of_node = 0;

void insert()
{
    int x;
    printf("enter element = ");
    scanf("%d", &x);

    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode->info = x;
    newNode->link = first;
    first = newNode;
    number_of_node++;
}

void short_list()
{

    if (first == NULL)
    {
        printf("List is empty");
    }
    else
    {

        for (int i = 0; i < number_of_node; i++)
        {
            struct node *pred = NULL;
            struct node *curr = first;
            struct node *next = first->link;
            struct node *temp;

            while (curr->link != NULL)
            {
                if (curr->info > next->info)
                {
                    temp = next->link;
                    next->link = curr;
                    curr->link = temp;

                    if (curr == first)
                    {
                        first = next;
                    }
                    else
                    {
                        pred->link = next;
                    }
                    pred=next;
                    next = curr->link;
                }
                else{
                    pred = curr;
                    curr=next;
                    next=next->link;
                }
                
            }
        }
    }
}

void display()
{
    if (first == NULL)
    {
        printf("<-----List is empty----->");
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

void main()
{
    insert();
    insert();
    insert();
    insert();
    insert();

    display();

    short_list();
    printf("\n");
    display();
}