#include<stdio.h>
#include<stdlib.h>


int ReverseStr(char* string)
{
    if(string==NULL)
        return -1;
    *pbegin = string;
    *pend = string;
    while(*pend!='\0')
    {
        pend++;
    }
    pend = pend - 1;
    char* temp;
    while(pbegin<pend)
    {
        *temp = *pbegin
        *pbegin = *pend;
         *pend = *temp;
    }
    #so far ,the first reversed has been finished
    int i = 0;
    while(str[i]!='\0')
    {
        if(str[i]!=" ")
        {
            int begin = i;
            while(str[i]!='\0'&&str[i]!=" ")
                i++;
            i -= 1;
            end = i;
            char temp = 0;
            while(begin<end)
            {
                temp = str[begin];
                str[begin] = str[end];
                str[end] = temp;
            }
        }
        else
            i++;
    }
}
