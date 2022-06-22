#include<stdio.h>
#define N 5
int main()
{
	int a[N],i;
	printf("Enter number for reverse\n",N);
	for(i = 0 ; i< N ; i++)
	    {
		 scanf("%d",&a[i]);
     	}
	
	
	printf("Reverse of array are : \n");
	for( i = N ; i>= 0 ;i--)
	  {
	    printf("%d\n",a[i]);  
	  }
	
	
	
	
	
	return 0;
}
