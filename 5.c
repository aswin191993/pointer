#include<stdio.h>
void intcopy(int *sorc,int *dest);
main()
{
	int a[]={1,2,2,3,4};
	int *src,*dst;
	int k[10];
	int i;
	src=a;
	dst=k;
	intcopy(src,dst);
	for(i=0;k[i]!='\0';i++)
	{
		printf("%d",k[i]);
	}
	printf("\n");
}
void intcopy(int *sorc,int *dest)
{
	while(*sorc!='\0')
	{
		*dest++ = *sorc++;
	}
	*dest='\0';
}
