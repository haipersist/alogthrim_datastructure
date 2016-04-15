#include<stdio.h>


int Number(int n)
{
	int count = 0;
	while(n)
	{
		++count;
		n = n & (n-1);
	}
	printf("%d",count);
	return count;
}

int Diff(int m,int n)
{
	int c = m^n;
	int w = Number(c);
	printf("%d",w);
	return w;
}



int main(void)
{
	int a = 7;
	int b = 6;
	printf("a = %d,b = %d",a,b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a = %d,b = %d",a,b);
	int d = Number(11);
	int c = Diff(9,6);
	printf("c = %d",c);
	return 0;
}
