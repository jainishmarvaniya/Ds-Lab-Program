#include<stdio.h>
void main(){
	int num,res=1;
	int i;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		res=res*i;
	}
	
	printf("factorial of number: %d",res);
}
