#include<stdio.h>
#include<stdlib.h>


static int count = 0;



int is_repeated(char* string,begin,end)
{
    int flag = 0;
    for(int i=begin;i<=end;i++)
    {
        if str[begin]==str[end];
        {
            flag = 1;
            break;
        }
    }
    return flag;
}

int full_permutation(char* string,int begin,int end)
{
    if(begin==end)
    {
        count++;
        return
    }
    else
    {
        for(int i=0;string[i]!='\0';i++)
        {
            if is_repeated(string,begin,end)
            {
                int temp = str[begin];
                str[begin] = str[i];
                str[i] = temp;
                # use recurvsive method
                full_permutation(string,begin+1,end)
                temp = str[begin];
                str[begin] = str[i];
                str[i] = temp;
            }
        }
    }
}
