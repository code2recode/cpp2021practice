#include<stdio.h>



void displayBits(int no)
{
	int i, mask;
	char displayBits[32];
	for(i=31;i>=0;i--)
	{
		mask=1<<i;
		printf("%d", ((no&mask)? 1:0));
		//putchar((no&mask)? '1':'0');
		displayBits[31-i]=((no&mask)?1:0);
	}
	
	printf("\n");
	for(i=0;i<=31;i++)
	printf("displaybits[%d]-%d, ", i, displayBits[i]);

}

int main()
{
	int no=12;
	int x, y;

	printf("Enter value for x and y in Hexadecimal form\n");
	scanf("%X %X",&x,&y );
	displayBits(x|y);
return 0;
}
