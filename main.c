#include<stdio.h>
#include<ncurses.h>

int main()
{
	char read;
	printf("Character to Binary\nEnter a Character: ");
	scanf("%c", &read);
	printf("%b",read);
	return 0;
}
