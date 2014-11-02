#include<stdio.h>
void copy(char strng[]);
#define max 100
main()
{
	char strng[max];	
	printf("input string:");
	scanf("%s",strng);
	copy(strng);
}
void copy(char strng[])
{
	char *aptr,*bptr;
	char new[100];
	aptr=strng;
	bptr=new;
	while(*aptr!='\0')
	{
		*bptr++ = *aptr++;
		*bptr='\0';
		printf("%s\n",new);
	}
	*bptr='\0';
	printf("%s\n",new);
}
	
