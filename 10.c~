#include<stdio.h>
#include<stdlib.h>
main()
{
	int *ptr;
	int i;
	ptr=(int*)malloc(10*sizeof(int));
	*(ptr+5)='a';
	for(i=0;i<10;i++)
	{
		printf("%p: ",ptr);
		printf("%d\n",*ptr);
		ptr++;
	}
	
}

