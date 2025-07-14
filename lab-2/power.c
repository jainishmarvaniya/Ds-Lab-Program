#include<stdio.h>
void main(){
	int num,pow,res=1,i;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	printf("Enter a power: ");
	scanf("%d",&pow);
	
	for( i=1;i<=pow;i++){
		res=res*num;
	}
	
	printf("power is %d",res);
}
