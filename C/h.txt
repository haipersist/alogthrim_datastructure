#include<stdio.h>
#include<math.h>


float myatof(char *string)
{
	float sign = 1.0;
	float sum = 0.0;
	if(*string == '-' || *string == '+')
	{
		sign = (*string == '-') ? -1.0:1.0; 
		string++;
	}

	while(*string !='.' && *string!='\0')
	{
		if(*string < '9' || *string > '0')
			sum = (float)(*string - '0') +sum*10;
		string++;
	}

	if(*string=='\0')   // if no  decimal,return
	{
		printf("%.1f\n",sign*sum);
		return (int)sign*sum;
	}
	else
	{
		string++;
		int n = 1;
		while(*string!='\0')
		
		{
			sum += (*string-'0')*pow(0.1,n); //eg:123.12  1*0.1, 2*0.01
			string++;
			n++;
		}
	}
	return sign*sum;

}


int main(void)
{
	char *string = "-123.12";
	//char *string = "+123";
	printf("%f\n",myatof(string));
	return 0;
}







