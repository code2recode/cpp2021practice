#include<stdio.h>

int main()
{	
	int i,j,k;
	int mat1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int mat2[3][3]={{1,2,3},{1,2,3},{1,2,3}};
	
	int mul[3][3];

	for(i=1;i<3;i++)
	{	
		for(j=0;j<3;j++)
		{
			mul[i][j]=0;
			for(k=0;k<3;k++)
			{
				mul [i][j]+=(mat1[i][k]+mat2[k][j]);
			}
		}	
	}
	printf ("matrix final solution\n");
	for (i=0;i<3;i++)
	{
			for(j=0;j<3;j++)	
			{
				printf("%d - ", mul[i][j]);
			}
				printf("\n");
	}	

//				pritf("%d %d\n", i, " ", j);
//				pritf("%d %d\n", i, " ", j);
return 0;
}
