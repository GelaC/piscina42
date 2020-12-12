
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int		main(void)
{
	char lis1[] = "bbbbbbbbbbbbbbbb";
	char lis2[] = "prueba";

	ft_strlcpy(lis2, lis1, 15);
	printf("%s \n", lis2);
	printf("%d", ft_strlcpy(lis2, lis1, 15));
	return (0);
}
