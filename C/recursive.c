#include<stdio.h>


int Recur_Cal(unsigned int m,unsigned int n)
{
	if(m == 1)
		return n;
	if(n == 1)
		return m;
	return Recur_Cal(m-1,n) + Recur_Cal(m,n-1);
}


int NoRecur(unsigned int m,unsigned int n )
{
	int i;
	int j;
	int a[100][100];
	for(i=0;i!=m;i++)
	{
		printf("test i=%d\n",i);
		a[i][0] = i+1;
	}
	for(j=0;j!=n;++j)
		a[0][j] = j+1;
	for(i=1;i!=m;i++)
	{
		for(j=1;j!=n;j++)
			a[i][j] = a[i-1][j] + a[i][j-1];

	}
	return a[m-1][n-1];
}




int main(void)
{
	unsigned int m = 3;
	unsigned int n = 4;
	int a = Recur_Cal(m,n);
	printf("a=%d\n",a);
	int b = NoRecur(m,n);
	printf("b=%d\n",b);
	return 0;
}

