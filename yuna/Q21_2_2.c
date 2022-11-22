#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20];
	char str2[20];
	char str3[40];

	printf("Input first string : ");
	gets(str1);
	printf("Input second string : ");
	gets(str2);

	strncpy(str3, str1, strlen(str1));
	strcat(str3, str2);
	puts(str3);
}

