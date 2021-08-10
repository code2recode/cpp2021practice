#include<stdio.h>
#include<stdlib.h>

int main()
{
	char alpha1[]="Rizwan Haider";
	
	printf("Size of  %s -  %ld\n",alpha1, sizeof(alpha1));

	alpha1[6]='\0';

	printf("%ld\n ",sizeof(alpha1));
	


return 0;
}
