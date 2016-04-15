#include<stdio.h>


char *test()
{
	static  char a[] = "haha";
	return a;
}

char *test2()
{
	char *p = "haha,hehe";
	return p;
}



int main(void)
{
	char *p;
	p = test();
	printf("%s\n",p);
	return 0;
}

