#include<stdio.h>
#include<stdlib.h>


 int StrtoInt(char *str)
 {
   if(str==NULL)
     return 0;
   int minus = 1;
   char* digit = str;
   int sum=0;
   if(*digit=='-')
   {
     minus = -1;
     ++digit;
   }
   else if(*digit=='+')
    ++digit;
   while(*digit!='\0')
    {
      if(*digit>='0'&&*digit<='9')
      {
        sum=sum*10+*digit-'0';
        ++digit;
      }
      else
       return 0;
    }
    return minus*sum;
 }

int main(void)
{
    char *string="24";
    int result=StrtoInt(string);
    printf("the coverted int is:%d\n",result);
    return 0;
}




