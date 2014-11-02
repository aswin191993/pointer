#include<stdio.h>

main()
{
	int k=2;
	int j=5;
	int *ptr;
	ptr=&k;
	printf("value of k:%d,adrs:%p", k, (void *)&k);
	printf("\nvalue of j:%d,adrs:%d", j, (void *)&j);
	printf("\nvalue of ptr:%d,adrs of k strd in p:%p\n", *ptr, ptr);
}

