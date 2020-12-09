
#include <stdio.h>

int		main(void)
{
	char lis1[] = "asrdfsdfc";
	char lis2[] = "prueba";

	ft_strlcpy(lis2, lis1, 4);
	printf("%s \n", lis2);
	printf("%d", ft_strlcpy(lis2, lis1, 4));
	return (0);
}
