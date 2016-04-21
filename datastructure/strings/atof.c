#include<stdio.h>
#include<stdlib.h>
#include <math.h>


float StrtoFloat(char* string)
{
    if(string==NULL)
        return 0.0;
    char* digit=string;
    float num = 0.0;
    int minus = 1;
    float num_decimal = 0.0;
    if(*digit=='+')
        ++digit;
     else if(*digit=='-')
     {
        minus = -1;
        ++digit;
     }
     while(*digit!='\0'&&*digit!='.')
     {
        if(*digit>='0'&&*digit<='9')
        {
            num = num*10.0 + *digit - '0';
            ++digit;
        }
        else
            return 0.0;
     }
    printf("%f\n",num);
     if(*digit=='\0')
     {
         return minus*num;
     }
     else
        {   ++digit;
            float fre = 0.1;
            while(*digit!='\0')
            {
                if(*digit>='0'&&*digit<='9')
                {
                    num_decimal = num_decimal + (*digit - '0')*fre;
                    fre = fre*0.1;
                    ++digit;
                }
                else
                    return 0.0;
            }
        }
      return  num + num_decimal;
}




int main(void)
{
    char* str = "23.5";
    printf("%f\n",StrtoFloat(str));
    return 0;
}

