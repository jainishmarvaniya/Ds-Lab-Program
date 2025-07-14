// linked list are same or not.

#include <stdio.h>
#include <stdlib.h>
struct node1
{
    int info;
    struct node1 *link;
};
struct node2
{
    int info;
    struct node2 *link;
};
struct node1 *first1 = NULL;
struct node2 *first2 = NULL;
int count1 = 0, count2 = 0;

void insertAtStart_list_1()
{
    int x;
    printf("enter number = ");
    scanf("%d", &x);

    struct node1 *newNode = (struct node1 *)malloc(sizeof(struct node1));

    newNode->info = x;
    newNode->link = NULL;

    if (first1 == NULL)
    {
        first1 = newNode;
    }
    else
    {
        newNode->link = first1;
        first1 = newNode;
    }
    count1++;
}

void insertAtStart_list_2()
{
    int x;
    printf("enter number = ");
    scanf("%d", &x);

    struct node2 *newNode = (struct node2 *)malloc(sizeof(struct node2));

    newNode->info = x;
    newNode->link = NULL;

    if (first2 == NULL)
    {
        first2 = newNode;
    }
    else
    {
        newNode->link = first2;
        first2 = newNode;
    }
    count2++;
}

void comper()
{
    int same = 0;

    if (count1 != count2)
    {
        printf("list are not same");
    }
    else
    {
        struct node1 *save1 = first1;
        struct node2 *save2 = first2;

        while (save1 != NULL && save2 != NULL)
        {
            if (save1->info != save2->info)
            {
                same++;
                break;
            }
            save1 = save1->link;
            save2 = save2->link;
        }

        if (same == 0)
        {
            printf("list are same");
        }
        else
            printf("list are not same");
    }
}
void main()
{
    int i = 1, choise;

    while (i)
    {
        printf("\n<-----enter choise----->\n");
        printf("1.insert element in first list\n");
        printf("2.insert element in second element\n");
        printf("3.compare\n");
        printf("4.exit\n");

        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
        {
            insertAtStart_list_1();
            break;
        }
        case 2:
        {
            insertAtStart_list_2();
            break;
        }
        case 3:
        {
            comper();
            break;
        }
        case 4:
        {
            i = 0;
            break;
        }
        }
    }
}
