#include<stdio.h>
#include<stdlib.h>

#define True 1
#define False 0

int order_search(int array[],int n,int obj)
{
	int found = False;
	int index = 0;
	while(index <n && found ==False)
	{
		if(array[index] == obj)
		{
			found = True;
			printf("%d,%d\n", array[index],index);
		}
		index +=1;

	}
	return found;
}
// the array must be sorted
int binary_search(int array[],int n,int obj)
{
	int found = False;
	int first = 0;
	int last = n-1;
	while(first<=last && found == False)
	{
		int middle = (first + last)/2;
		if (array[middle] == obj)
		{
			printf("%d,%d\n", array[middle],middle);
			found = True;
			break;
		
		}
		else if(obj<array[middle])
			last = middle - 1;
		else
			first = middle + 1;
	}
	return found;
}



int main(void)
{
	int SIZE = 10;
	int array[] = {6,10,40,48,50,79,99,159,199,201};
	printf("%d\n",binary_search(array,SIZE,50));
	printf("%d\n", order_search(array,SIZE,50));
}

