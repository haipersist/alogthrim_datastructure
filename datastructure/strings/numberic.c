#include<stdio.h>
#include<stdlib.h>

#define True 1
#define False 0

int isNumberic(char *string);
int isExpontion(char **string);
void scanNumber(char **string);

int main(void)
{
	char *string1 = "+haibo";
	char *string2 = "+1423";
	char *string3 = "-1e+4";
	printf("1:%d\n",isNumberic(string1));
	printf("2:%d\n",isNumberic(string2));
	//printf("3:%d\n",isNumberic(string3));
	return 0;
}


int isNumberic(char *string)
{
	int numberic = True;
	if(*string == '\0')
		return False;
	if(*string == '+' || *string == '-')
		++string;
	if(*string == '\0')
		return False;
	scanNumber(&string);
	if(*string != '\0')
	{
		printf("test:%c,",*string);
		if(*string == '.')
		{
			++string;
			scanNumber(&string);
			if(*string == 'e' || *string == 'E')
				numberic = isExpontion(&string);
		}
		else if(*string == 'E' || *string == 'e')
			numberic = isExpontion(&string);
		else
			numberic = False;
	}
	printf("numberic:%d\n",numberic);
	return numberic && *string == '\0';
}

int isExpontion(char **string)
{
	++(*string);
	if(**string == '+' || **string == '-')
		++(*string);
	if(**string == '\0')
		return False;
	scanNumber(string);
	return (**string == '\0')? True:False;
}

void scanNumber(char **string)
{
	while(**string != '\0' && **string >= '0' && **string <= '9')
	{
		printf("%c,",**string);
		++(*string);
	}
}

