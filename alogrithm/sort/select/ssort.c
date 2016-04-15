#include<stdio.h>
#include<stdlib.h>

void ssort(int array[],int n)
{
	int i,j;
	int small;
	for(i=0;i<n;i++)
	{
		small=i;
		printf("small=%d\n ",small);
		for(j=i+1;j<n;j++)
		{
			if (array[j]<array[small])
				small=j;
		}
		int temp=0;
		if (small!=i)
		{
			temp=array[i];
			array[i]=array[small];
			array[small]=temp;
			printf("array[%d]=%d,array[small]=%d\n ",i,array[i],array[small]);
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",array[i]);

}


int main(void)
{
	int array[6]={7,3,1,6,4,8};
	ssort(array,6);
}




