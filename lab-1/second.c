#include<stdio.h>
void main(){
	int second;
	
	printf("Enter a second: ");
	scanf("%d",&second);
	
	int hour;
	hour=second/3600;
	
	int min;
	min=hour/60;
	
	printf(" %d ",hour);
	printf(" %d ",min);
	printf(" %d ",second);
}
