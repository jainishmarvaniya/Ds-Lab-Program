#include<stdio.h>
void main(){
	int rem=1,num,r=0;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	while(num!=0){
		rem=num%10;
		r=r*10+rem;
		num=num/10;
	}
	
	printf("reverse of a number: %d",r);
}
