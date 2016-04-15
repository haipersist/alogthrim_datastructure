#include<stdio.h>
#include<stdlib.h>

int isort(int array[],int n)
{
	int i = 0;
	int j;
	for(i=1;i<n;i++)
	{
		int temp = array[i];
		for(j=i;j>0&&array[j-1]>temp;j--)
		{
			array[j] = array[j-1];
		}
		array[j] = temp;
	}
	for(i=0;i<7;i++)
	{
		printf("%d ",array[i]);
}
}


int main(void)
{
	int array[7]={8,2,7,1,9,3,0};
	int result[7];
	isort(array,7);
}



