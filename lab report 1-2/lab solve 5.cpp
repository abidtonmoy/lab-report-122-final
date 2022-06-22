#include <stdio.h>
#include<conio.h> 
#define N 500
int main()
{
	int Tonmoy[N], i, j, Size, Count = 0;
	
	printf("\n Please Enter Number of elements want  to store in  array  :   ");
	scanf("%d", &Size);
	
	printf("\n Please Enter integer elements for finding duplicate  :  ", Size);
	for (i = 0; i < Size; i++)
	{
    	scanf("%d", &Tonmoy[i]);
   	}     
 
	for (i = 0; i < Size; i++)
	{
		for(j = i + 1; j < Size; j++)
		{
    		if(Tonmoy[i] == Tonmoy[j])
    		{
    			Count++;
				break;
			}
		}
	}

 	printf("\n Total Number of Duplicate Elements in this Array  =  %d ", Count);  
	    
 	getch();
}
