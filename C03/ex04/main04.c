#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
	char test[] = "Marvin is my favourite android ever, although he's depressed...";
	char find[] = "fgh";

	char *result = ft_strstr(test, find);
	char *result2 = strstr(test, find);
	printf("%s\n", result);
	printf("%s", result2);
}
