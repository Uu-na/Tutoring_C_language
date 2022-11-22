#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{	
	char str[30];
	int sum = 0;
	int i = 0;

	printf("Input string : ");
	gets(str);

	for(i= 0; i<strlen(str); i++)
	{
		if('1'<=str[i] && str[i]<='9')
		{
			sum += str[i] - '0';
		}	

	}
	
	printf("%d\n", sum);
	return 0;
}
