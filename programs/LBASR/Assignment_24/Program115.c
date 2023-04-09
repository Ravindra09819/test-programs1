/*
Write a program which accept string from user &
display it in reverse order
*/

#include<stdio.h>

void Reverse(char *str)
{
	char *start = str;
	char *end = str;
	char temp = 0;
	
	while(*end != '\0')
	{
		end++;
	}
	end--;
	
	while(start < end)
	{
		*start = *end;
		*end = temp;
		temp = *start;
		
		start++;
		end--;
	}
}

int main()
{
	char arr[20];
	
	printf("Enter string");
	scanf("%[^'\n']s",arr);
	
 	Reverse(arr);

    printf("Reverse string %s",arr);

    return 0;
}
