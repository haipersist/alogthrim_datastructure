#include<stdio.h>


char *myitoa(char *str,int inter, int size)
{
	char temp[size];
	int i = 0;
	int j = 0;
	while(inter)
	{
		temp[i] = inter%10 + '0';
		printf("%c\n",temp[i]);
		inter /=10;
		i++;
	}
	while(--i>=0)
	{
		str[j] = temp[i];
		j++;
	}
	str[j] = '\0';
	printf("%s\n",str);
	return str;
}

int main(void)
{

	char *array="test";
	array = myitoa(array,123,3);
}



	

