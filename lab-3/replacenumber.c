#include<stdio.h>
void main(){
       	int n;
		printf("enter a size: ");
	    scanf("%d",&n);
	
	   int a[n],i;
		for( i=0;i<n;i++){
		    printf("enter array element: ");
		    scanf("%d",&a[i]);
	    }
	    
	    int x,y,index=0;
	    printf("Enter a number one: ");
	    scanf("%d",&x);
	    
	    printf("Enter a want to replace a number: ");
	    scanf("%d",&y);
	    
	    for(i=0;i<n;i++){
	    	if(a[i]==x){
	    		a[i]=y;
	    		index=i;
				printf("the number replace is: %d",a[i]);
				printf("\n");
				printf("replace number index is: %d",index);
				printf("\n");
			}
			printf("final array is %d",a[i]);
			printf("\n");
		}
	 
}
