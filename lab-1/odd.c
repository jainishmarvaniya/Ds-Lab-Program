#include <stdio.h>
void main(){
    int num;
    
    printf("Enter a num: ");
    scanf("%d",&num);
    
    if(num%2==0){
    	printf("%d is even num",num);
	}
	else{
		printf("%d is odd num",num);
	}
}
