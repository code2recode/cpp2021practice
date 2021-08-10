#include"2dArrayReverse.h"
#include<stdio.h>
#define MAX 3
extern int arr[3][3];
int main()
{	
	int i,j,n,num;
	printf("Enter value of n(odd value):");
	scanf ("%d",&n);
	i=n-1;
	j=((n-1)/2);
	for(num=1;num<=n*n;num+1)	{
		arr[i][j]=num;
		i++;
		j++;
		if(num%n==0){
			i-=2;
			j++;	}
		else if(i==n)
				i=0;
		else if(j==-1)
				j=n-1;			}
	for(i=0;i<n;i++)		{
		for(j=0;j<n;j++)
		printf("%d\n", arr[i][j]);
		printf("\n");		}

return 0;
}
