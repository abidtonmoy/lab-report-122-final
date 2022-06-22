#include<stdio.h>
#define N 500
int main()
{
	int a[N],i,sum =0;
	printf("Enter five number for sum :\n");
	for(i = 0 ; i< 5 ; i++)
	    {
		 scanf("%d",&a[i]);
     	}
	
	
	
	for( i = 0 ; i< 5 ;i++)
	  {
	    sum = sum + a[i]; 
	  }
	   printf("The sum of array :%d\n",sum); 
	
	
	
	
	
	return 0;
}
