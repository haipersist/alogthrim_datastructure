#include<stdio.h>

void isort(int *array,int n)
{
	int i;
	int j;
	int temp;
	for(i=1;i<n;i++)
	{
		j = i;
		temp = array[j];
		while(j>0&&array[j-1]>temp)
		{
			array[j] = array[j-1];
			j--;
		}
		array[j] = temp;
	}


}

int main(void)
{
	int array[6] = {5,7,3,6,8,2};
	isort(array,6);
	int i;
	for(i=0;i<6;i++)
		printf("%d ",array[i]);
	return 0;
}

