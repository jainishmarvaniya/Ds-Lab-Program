#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
    int rollNo;
    char name[10];
    char branch[10];
    int batchNo;
};
void main(){
    struct student *stu_1 = (struct student *)malloc(sizeof(struct student));

    printf("enter roll no = ");
    scanf("%d",&stu_1->rollNo);

    printf("enter name = ");
    getchar();
    gets(stu_1->name);


    printf("enter branch = ");
    getchar();
    gets(stu_1->branch);

    printf("enter batch no. = ");
    scanf("%d",&stu_1->batchNo);

    printf("<-----student details----->\n");
    printf("rollo no = %d\n",stu_1->rollNo);
    printf("name = %s\n",stu_1->name);
    printf("branch = %s\n",stu_1->branch);
    printf("batch no. = %d",stu_1->batchNo);

    free(stu_1);
}