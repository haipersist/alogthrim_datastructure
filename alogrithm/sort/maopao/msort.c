#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int msort(int array[],int n)
{
	int exchange = 0;
		int i,j;
		i = j = 0;
	for(i=0;i<n;i++)
	{
		j = n-1;
		while(j > i)
		{
			int temp=0;
			//printf("%d",array[j]);
			if (array[j]<array[j-1])
			{
				temp = array[j];
				printf("%d",temp);
				array[j] = array[j-1];
				array[j-1] = temp;
				exchange = 1;
			}
			j = j-1;
		}
		if (exchange == 0)
			break;
	}
	for(i=0;i<n;i++)
		printf("%d\n",array[i]);
}

int main(void)
{
	int SIZE=9;
	int array[9]={5,2,8,2,7,9,10,20,15};
	int i=0;
	for(i=0;i<SIZE;i++)
		printf("%d\n",array[i]);
	msort(array,SIZE);
	return 0;
}


				

