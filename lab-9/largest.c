#include<stdio.h>
#include<stdlib.h>

void main(){
	int n;
	printf("Enter a size of array: ");
	scanf("%d",&n);
	
     int *p= (int *) malloc(sizeof(int)*n);
     int i;
     
     for(i=0;i<n;i++){
     	printf("Enter a array element %d :",i+1);
     	scanf("%d",(p+i));
	 }
	 
      int large= *p;
      
      for(i=0;i<n;i++){
      	if(p+(i*sizeof(int))>large){
      		  large= *(p+i);
		  }
	  }
	  
	  printf("largest element is: %d",large);
}
