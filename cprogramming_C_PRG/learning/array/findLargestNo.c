#include<stdio.h>

int main()
{
	int array[10]={23,1,12,24,142,123,342,121,123,12};
	int i,j,largest=array[0];
	for(i=1;i<10;i++)
	{
		if(largest<array[i])
		{	
			largest=array[i];	
		}
	}	
		printf("%d\n", largest);
return 0;
}
