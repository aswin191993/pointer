#include<stdio.h>
main()
{
	char ar[]={'a','s','w','i','n','\n','\0'};
	char *ptr;
	int i;
	ptr=ar;
	for(i=0;(*ptr)!='\0';i++)
	{
		printf("%c",*ptr);
		ptr++;
	}
}
