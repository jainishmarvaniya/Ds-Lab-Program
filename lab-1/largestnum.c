#include<stdio.h>
void main(){
	int a;
	int b;
	int c;
	
	printf("Enter a number 1: ");
	scanf("%d",&a);
	
	printf("Enter a number 2: ");
	scanf("%d",&b);
	
	printf("Enter a number 3: ");
	scanf("%d",&c);
	
	if(a>b){
		if(a>c){
			printf("a is largest",a);
		}
		else{
			printf("c is largest",c);
		}
	}
	else{
		if(b>c){
			printf("b is largest",b);
		}
		else{
			printf("c is largest",c);
		}
	}
}
