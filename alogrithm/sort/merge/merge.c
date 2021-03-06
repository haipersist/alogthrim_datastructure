#include<stdio.h>
#include<stdlib.h>   

void merge(int *array,size_t n1,size_t n2)
{
	size_t copied = 0;
	size_t copied1 = 0;
	size_t copied2 = 0;
	int i;
	int *p = array + n1;
	int *temp;
	temp = (int*)malloc((n1+n2)*sizeof(int));
	if(temp==NULL)
		return;
	while((copied1 < n1) && (copied2 < n2))
	{
		printf("n1=%d,n2=%d,a=%d,p=%d,copied1=%d,copied2=%d\n",n1,n2,array[copied1],p[copied2],copied1,copied2);
		if(array[copied1]<=p[copied2])
			temp[copied++] = array[copied1++];
		else
		{

			temp[copied] = p[copied2++];
			copied++;
		}

	}
	while(copied1 < n1)
		temp[copied++] = array[copied1++];
	while(copied2 < n2)
		temp[copied++] = p[copied2++];
	for(i = 0;i<n1+n2;i++)
	{
		array[i] = temp[i];
		printf("%d,",array[i]);
	}
	for(i=0;i<n1+n2;i++)
		array[i] = temp[i];
	printf("\n");
	free(temp);
}


void mergesort(int *array,size_t n)
{
	size_t n1;
	size_t n2;
	if(n>1)
	{
		n1 = n/2;
		n2 = n - n1;
		mergesort(array, n1);
		mergesort((array + n1), n2);
		merge(array,n1,n2);
	}
}



int main(void)
{
	int array[] = {4,11,2,6,5,7,9,3};
	int i;
	mergesort(array,8);
	for(i=0;i<8;i++)
		printf("%d,",array[i]);
	return 0;
}


