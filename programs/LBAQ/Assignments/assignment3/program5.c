// Accept on character from user and check wheather that character is vowel(a,e,i,o,u) or not

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckVowel(char cChar)
{
    if(cChar=='a' || 'e' || 'i' || 'o' || 'u' ||'A' ||'E'||'I'||'O'||'U')
    {
        return TRUE;
    }

    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter Character:");
    scanf("%c",&cValue);

    bRet=CheckVowel(cValue);

    if(bRet==TRUE)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is not vowel");
    }
    return 0;
}