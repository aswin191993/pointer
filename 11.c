#include<stdio.h>
#include<stdlib.h>
#define colm 4
typedef int rary[colm];
rary *ptr;
main()
{
	//int (*ptr)[col];
	int row,col,i=0;
	ptr=malloc(row*col*sizeof(int));
	//*ptr[2]='a';
	//*(*(ptr+3)+3)=7;
	for(row=0;row<8;row++)
	{
		for(col=0;col<5;col++)
		{
			ptr[row][col]=i;
			printf("%d ",*(*(ptr+row)+col));
			i++;
		}
	printf("\n");
	}


}

