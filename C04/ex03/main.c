#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char list[] = "   +-+--+--56563.rg sfg";
	
	printf("%d\n", ft_atoi(list));
	return (0);
}