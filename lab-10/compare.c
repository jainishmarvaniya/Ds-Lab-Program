#include<stdio.h>
#include<stdlib.h>

struct node1{
	int info1;
	struct node1 *link1;
};
int main(){
struct node *first1;
struct node *second1;
struct node *third1;

struct node *first2;
struct node *second2;
struct node *third2;

first1=(struct node*) malloc(sizeof(struct node1));
second1=(struct node*) malloc(sizeof(struct node1));
third1=(struct node*) malloc(sizeof(struct node1));


first2=(struct node*)malloc(sizeof(struct node1));
second2=(struct node*)malloc(sizeof(struct node1));
third2=(struct node*)malloc(sizeof(struct node1));

first1->info=2;
first1->link=second1;

second1->info=4;
second1->link=third1;

third1->info=7;
third1->link=NULL;

first2->info=5;
first2->link=second2;

second2->info=6;
second2->link=third2;

third2->info=3;
third2->link=NULL;
}

void compare(struct node* ptr1,struct node* ptr2){
       int flag=0;

	   if(ptr1!=NULL && ptr2!=NULL){
		 if(ptr1->info != ptr2->info){
			flag=1;
			break;
		 }

		 ptr1=ptr1->link;
		 ptr2=ptr2->link;
	   }

	   if(flag==1){
		    printf("list is not same");
	   }else{
		    printf("list is same");
	   }
}




