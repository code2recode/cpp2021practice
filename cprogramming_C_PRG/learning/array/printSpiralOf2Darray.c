#include<stdio.h>
#define ROW 3
#define COL 4
int main()
{
	//int arr[ROW][COL]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
	int arr[ROW][COL]={{1,2,3,4},{6,7,8,9},{11,12,13,14}};

	int i,j,count,r,c,n;
	i=j=count=r=c=n=0;
	r=ROW, c=COL;
	if(r==c)
	n=r/2;
	else if(r>c)
	n=c/2;
	else
	n=r/2;
	
	while(count <n)
	{
		while(j<c-1)
		{	printf("%d-", arr[i][j]);
			j++;	}

		while(i<r-1)
		{	printf("%d-", arr[i][j]);
			i++;	}

		while(j>COL-c)
		{	printf("%d-", arr[i][j]);
			j--;	}
		while(i>ROW-r)
		{	printf("%d-", arr[i][j]);
			i--;	}
i++; j++; r--; c--; count ++;
}
return 0;
}
