#include<stdio.h>


void swap1(int x,int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;

}

void swap4(int *p,int *q)
{
	int *temp;
	*temp = *p;
	*p = *q;
	*q = *temp;
}


void swap2(int *x,int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}


void swap3(int *x,int *y)
{
	int *temp;
	temp = y;
	y = x;
	x = temp;
}

	
int main(void)
{
	int x = 3;
	int y = 4;
	swap1(x,y);
	printf("swap1:x=%d,y=%d\n",x,y);
	swap2(&x,&y);
	printf("swap2:x=%d,y=%d\n",x,y);
	x = 3;
	y = 4;
	swap3(&x,&y);
	printf("swap3:x=%d,y=%d\n",x,y);
	x =3;
	y = 4;
	swap4(&x,&y);
	printf("swap4:x=%d,y=%d\n",x,y);
	return 0;
}
