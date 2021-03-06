#include<stdio.h>
#include<stdlib.h>


int partition(int *array,int left,int right)
{
	int base = array[left];
	int left_index = left+1;
	int right_index = right;
	int temp;
	while(left_index < right_index)
	{
		while(array[left_index] < base)
			left_index++;
		while(array[right_index] > base)
			right_index--;
		if(left_index < right_index)
		{
			temp = array[left_index];
			array[left_index] = array[right_index];
			array[right_index] = temp;
		}
	}
	temp = array[left];
	array[left] = array[right_index];
	array[right_index] = temp;
	return right_index;
}

void ksort(int *array,int left,int right)
{
	if((right>left) && (right-left>1))
	{
		int mid = partition(array,left,right);
		ksort(array,left,mid);
		ksort(array,mid + 1,right);
	}
}


int main(void)
{
	int array[8] = {6,2,4,3,1,8,7,5};
	ksort(array,0,7);
	int i;
	for(i=0;i<8;i++)
		printf("%d,",array[i]);
	return 0;
}

