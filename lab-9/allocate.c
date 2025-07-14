#include<stdio.h>
#include<stdlib.h>
void main(){
	int *aptr=(int *) malloc(sizeof(int));
	float *bptr=(float *) malloc(sizeof(float));
	char *cptr=(char *) malloc(sizeof(char));
	
	if(aptr && bptr && cptr){
		*aptr=10;
		*bptr=20.5;
		*cptr='a';
		
		printf("%d",*aptr);
		printf("%f",*bptr);
		printf("%c",*cptr);
	}
	
	else{
		printf("memory allocation failed\n");
	}
	
	free(aptr);
	free(bptr);
	free(cptr);
	
}
