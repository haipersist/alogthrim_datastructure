#include<stdio.h>

void Reverse(char *string)
{
	char *back = string;
	while(*back!='\0')
		back++;
	back--;
	while(string<back)
	{
		char temp;
		temp =*back;
		*back-- = *string;
		*string++ = temp;
	}
	printf("%c\n",*(++string));
}

int main(void)
{
	char *string = "haibod";
	Reverse(string);
	return 0;
}



