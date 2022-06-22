#include<stdio.h>
int main()
{
	int Tonmoy1[30],Tonmoy2[30],i,n;
	printf("How many number want to copy : ");
	scanf("%d",&n);
	
		for(i=0 ; i<n ; i++)
	{
		scanf("%d",&Tonmoy1[i]);
	}
	
	//printing Tonmoy1[]
	printf("Tonmoy1 : ");
	for(i=0 ; i<n ; i++)
	{
		
		
		printf("%d ",Tonmoy1[i]);
	}
    
    //copying all elements
    for(i=0 ; i<n ; i++)
    {
    	
    	Tonmoy2[i]=Tonmoy1[i];
	}
    
    //printing copy elements
    printf("\nTonmoy2 : ");
	for(i=0 ; i<n ; i++)
	{
		
		
		printf("%d ",Tonmoy2[i]);
	}

	return 0;
}
