#include <stdio.h>

int main(void)
{
	char str[20];
	int idx = 0;
	int size = 0;
	char max = 0;

	printf("Input word : ");
	scanf("%s",str);

	while(str[idx] != 0)	idx++;

	size = idx;
	max = str[0];
	for(int i=0; i<size; i++){
		if( max < str[i])	max = str[i];
	}

	printf("%c\n",max);
		



}
