#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char destino[80] = "Hello ";
	char append[] = "World!";
	unsigned int size = ft_strlcat(destino, append, 18);
	printf("%s\n", destino);
	
	char destino2[80] = "Hello ";
	char append2[] = "World!";
	unsigned int size2 = strlcat(destino2, append2, 18);
	printf("%s\n", destino2);
	printf("Valor devuelto mi función: %d\n", size);
	printf("Valor función oficial: %d", size2);
}
