#include<stdio.h>

void shsort(int *array,int n)
{
	int interval = n/2;
	int i,j;
	int temp;
	while(interval>=1)
	{
		i = interval;
		while(i<n)
		{
			if(array[i-interval]>array[i])
			{
				j = i-interval;
				temp = array[i];
				while(j>=0&&array[j]>temp)
				{
					array[j+interval] = array[j];
					j -= interval;
				}
				array[j+interval] = temp;
			}
		i++;
		}
		interval /=2;
	}
}


int main(void)
{
	int array[] = {3,6,2,8,4,7,5,9};
	shsort(array,8);
	int i;
	for(i=0;i<8;i++)
		printf("%d ",array[i]);
	return 0;
}





