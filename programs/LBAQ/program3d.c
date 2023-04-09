//accept one character from user and convert case of that character
/*
#include<stdio.h>
char DisplayConvert(char CValue)
{
int convert=0;

if(isalpha(CValue))
{
CValue=toupper(CValue);
printf("output :%c",CValue);
}
else if(isalpha(CValue))
{
CValue=tolower(CValue);
printf("output:%c",CValue);
}

}
int main()
{
char cValue='\0';
printf("Enter character\n");
scanf("%c",&cValue);
DisplayConvert(cValue);

return 0;
}

