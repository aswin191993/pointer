#include<stdio.h>
#define max 10
int pcopy(int *aptr,int *bptr);
main()
{
	int aray[]={1,1,3,3,3};
	int baray[max];
	int *aptr1,*bptr1;
	int i;
	aptr1=aray;
	bptr1=baray;
	pcopy(aptr1,bptr1);
	printf("%d\n",pcopy(aptr1,bptr1));
	for(i=0;*(bptr1+i)!='\0';i++)
	{
		printf("%d",*(bptr1+i));	
	}
	
}
int pcopy(int *aptr1,int *bptr1)
{
	while(*aptr1!='\0')
	{
		*bptr1++=*aptr1++;
	}
	*bptr1++='\0';
	return *bptr1;
}


