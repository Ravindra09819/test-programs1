#include<stdio.h>

int CountChar(char str[],char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(ch==*str )
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char arr[20];
    char cValue;
    int iRet=0;

    printf("enter string\n");
    scanf("%[^'\n']s",arr);

    printf("enter the character\n");
    scanf("%c",&cValue);

    iRet=CountChar(arr,cValue);
    printf("%d\n",iRet);

    return 0;
}