#include<stdio.h>

void StrCpyRev(char *src,char *dest)
{
    char temp;
    char *start=dest;
    char *end=dest;
    
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';

    while(*end != '\0')
    {
        end++;
    }
    end--;
    while(start < end)
    {
           temp = *start;
           *start = *end;
           *end = temp;

           start++;
           end--;
    }
}
int main()
{
    char arr[30]="Marvellous Python";
    char brr[30];

    StrCpyRev(arr,brr);

    printf("%s",brr);

    return 0;
}