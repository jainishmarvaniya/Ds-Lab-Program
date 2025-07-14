#include<stdio.h>
void main(){
	int n,i,j,count=0;
	
	printf("enter a size: ");
	scanf("%d",&n);
	
	   int a[n];
		for( i=0;i<n;i++){
		    printf("enter array element: ");
		    scanf("%d",&a[i]);
	    }
	
	for( i=0;i<n;i++){
		for(j=i+1;j<n;j++){
				if(a[i]==a[j]){
			        printf("array contain dublicate");
			        return;
		        }
		    
		}
	}
}


