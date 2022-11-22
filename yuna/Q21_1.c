#include <stdio.h>
#include <string.h>

int change_alph(int ch)
{
	if(ch > 64 && ch <91)
		ch += 32;
	else if(ch > 96 && ch < 123)
		ch -= 32;
	else
		ch = -1;

	return ch;
}

int main(void)
{
	int c1, mem;
	printf("Input alphabet 1 : ");
	c1 = getchar();
	c1 = change_alph(c1);
	
       if(c1 == -1)
       	printf("error!\n");
       else{
	       putchar(c1);
	       printf("\n");

	}

}



