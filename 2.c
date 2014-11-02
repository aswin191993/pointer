#include<stdio.h>
#define max 10
main()

{
	int ar[]={1,2,3,4,5,6,7};
	int *ptr;
	int i;
	ptr=ar;
	for(i=0;(*ptr)!='\0';i++)
	{
				
		printf("%d:%d\t",i,*ptr);
		printf("%d of afrs:%p\n",i,ptr);
		++ptr;
	}
}
