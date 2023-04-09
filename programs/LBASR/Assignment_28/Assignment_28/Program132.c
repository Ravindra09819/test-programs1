#include<stdio.h>

void StrCpyRev(char *src,char *dest)
{    
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
    
}
int main()
{
    char arr[30]="Marvel lous Pyth on";
    char brr[30];

    StrCpyRev(arr,brr);

    printf("%s",brr);

    return 0;
}