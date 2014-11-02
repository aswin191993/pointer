#include<stdio.h>
void swap(int *a,int*b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

main()
{
	int *ptr;
	int a=1,b=2;
	swap(&a,&b);
	printf("%d%d\n",a,b);	
	
}
