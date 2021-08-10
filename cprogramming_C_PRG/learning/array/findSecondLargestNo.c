#include<stdio.h>
int main()
{
	int i;
	int array[10]={9,10,7,11,14,15,9,20,16,14};
	int firstLargest=array[0];
	int secondLargest=0;
	
	for(i=1;i<10;i++)	
	{
		if(firstLargest<array[i])
		{
			secondLargest=firstLargest;
			firstLargest=array[i];
		}
		if(firstLargest >array[i] && secondLargest<array[i])
		secondLargest=array[i];

		printf("In %d iteration values of 1st Largest=%d, 2nd Largest=%d\n\n", i, firstLargest, secondLargest );

	}
return 0;
}
