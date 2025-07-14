#include<stdio.h>
void main(){

    int a,b,i,j;

    printf("Enter a starting range: ");
    scanf("%d",&a);

    printf("Enter a ending range: ");
    scanf("%d",&b);

    int flag=0;
		int temp;
		if(a>b)
		{
           temp=a;
           a=b;
           b=temp;
		}
		for( i=a;i<=b;i++)
		{
             for( j=2;j<i;j++)
             {
                if(i%j==0)
                {
                  flag=1;
                  break;  
                }	
             }
             if(flag==0)
                {
                	printf("prime number is:%d\n",i);
                }
               flag=0; 
		}
	}
