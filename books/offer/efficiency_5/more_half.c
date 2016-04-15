#include<stdio.h>
#include<stdlib.h>

int MoreThanHalf(int *array,int len);

int main(void)
{
	int array[] = {1,4,5,4,4,4,2,2,3};
	int *p = array;
	printf("%d\n",MoreThanHalf(p,9));
}



int MoreThanHalf(int *array,int len)
{
	if(array == NULL || len <= 0)
		return;
	int times = 1;
	int i;
	int result = array[0];
	for(i = 1;i < len;i++)
	{
		if(times == 0)
		{
			result = array[1];
			times = 1;
		}
		else if(array[i] == result)
			times++;
		else
			times--;
	}
	return result;
}



