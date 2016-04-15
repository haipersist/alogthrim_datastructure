#include<stdio.h>

int max(int x,int y)
{
	return x>y?x:y;
}


int main(void)
{
	int max(int,int);  //it is needed to focuc on
	int (*p)(int,int) = &max;
	int a = 3;
	int b = 4;
	int c = 5;
	int d = (*p)((*p)(3,4),5);
	printf("%d\n",d);
	return 0;
}




