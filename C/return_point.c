#include<stdio.h>
#include<stdlib.h>


int *test(int n)
{
	int k = 0;
	int *t;
	if(n%2==0)
		k = 1;
	t = &k;
	return t;
}


int main(void)
{
	int n = 4;
	int *p = test(n);
	printf("*p=%d,p=%p",*p,p);
}





