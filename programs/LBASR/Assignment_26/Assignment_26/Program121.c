#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str,char ch)
{
    while(*str!='\0')
    {
        if((*str>='A')&&(*str<='z'))
        {
            
        }
        else
        {
            return FALSE;
        }
        str++;
    }
}

int main()
{
    char arr[20];
    char cValue;
    BOOL bRet=FALSE;

    printf("enter string\n");
    scanf("%[^'\n']s",arr);

    printf("enter the character\n");
    scanf("%c",&cValue);

    bRet=ChkChar(arr,cValue);

    if(bRet==TRUE)
    {
        printf("character found");
    }
    else
    {
        printf("character not found");
    }
    return 0;
}

