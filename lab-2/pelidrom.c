#include<stdio.h>
void main(){
    
    int n,rem=1,r=0,i;

    printf("Enter a number: ");
    scanf("%d",&n);
    i=n;
    while(n!=0){
		rem=n%10;
		r=r*10+rem;
		n=n/10;
	}

    if(i==r){
        printf("%d is pelidrom number",i);
    }
    else{
        printf("%d is not pelidrom number",i);
    }
}

