#include <stdio.h>

int main(void)
{
	char str[30];
	int len = 0;

	printf("Input word : ");
	scanf("%s",str);

	while(str[len] != 0){
		len++;
	}

	printf("length of the word is : %d\n",len);
}
