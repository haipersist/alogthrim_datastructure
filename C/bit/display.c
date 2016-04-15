#include<stdio.h>

void itob(int n)
{
	int i;
	int *ps;
	int size = 8*sizeof(int);
	for(i = size-1;i>=0;i--,n>>=1)
		ps[i] = (01 & n);
	
	for(i = 0;i<size;i++)
	{
		if(i%4 == 0)
			putchar(' ');
		printf("%d",ps[i]);
	}
}



int main(void)
{
	int n = 10;
	itob(n);
}
