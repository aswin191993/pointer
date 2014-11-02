#include<stdio.h>
int m=10;
int n=20;
void change(int **d)
{
	*d=&n;
}

main()
{
	int *p;
	p=&m;
	change(&p);
	printf("%d to %d\n",m,*p);
}
