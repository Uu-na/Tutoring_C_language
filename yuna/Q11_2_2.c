#include <stdio.h>

int main(void)
{
	char str1[20];
	char str2[20];
	char temp;
	int idx = 0;
	int size = 0;

	printf("Input word : ");
	scanf("%s",str1);	
	
	while(str1[idx] != '\0')	idx++;

	size = idx;
	idx -= 1;

	for(int i =0; i<size; i++){
		temp = str1[idx];
		str2[i] = temp;
		idx--;
	}

	str2[size] = '\0';
	printf("%s\n",str2);


}
