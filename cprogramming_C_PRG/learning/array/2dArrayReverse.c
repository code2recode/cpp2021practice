#include "2dArrayReverse.h"

#include <stdio.h>

extern int arr[3][3];

int main()
{	
	short int i=2, j=2;
	for(;i>=0;i--)
	{
		for(j=2;j>=0;j--)
		printf("%d - ", arr[i][j]);
		printf("\n");
	}
return 0;
}
