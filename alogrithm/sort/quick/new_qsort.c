#include<stdio.h>
#include<assert.h>

int partition(int *array,int start,int end)
{
	int base = array[start];
	int temp;
	int leftindex = start + 1;
	int rightindex = end;
	while(leftindex<rightindex)
	{
		while(array[leftindex] < base)
			leftindex++;
		while(array[rightindex] > base)
			rightindex--;
		if(leftindex<rightindex)
		{
			temp = array[leftindex];
			array[leftindex] = array[rightindex];
			array[rightindex] = temp;
		}
	}
	temp = array[rightindex];
	array[rightindex] = array[start];
	array[start] = temp;

	return rightindex;
}


void quicksort(int *array,int start,int end)
{
	if(end-start>0)
	{
		if(end-start==1)
		{
			if(array[start]>array[end])
			{
				int temp = array[start];
				array[start] = array[end];
				array[end] = temp;
			}
		}
		else if(end-start>1)
		{
		int mid = partition(array,start,end);
		quicksort(array,start,mid-1);
		quicksort(array,mid+1,end);
		}
	}
}




int main(void)
{
	int array[] = {5,4,7,6,8,2,3};
	quicksort(array,0,6);
	int i;
	for(i=0;i<7;i++)
		printf("%d ",array[i]);
	return 0;
}

