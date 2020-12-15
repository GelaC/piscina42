#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char destino[80] = "Helwertlo ee ";
	char append[] = "Worretwertld!";
	unsigned int size = ft_strlcat(destino, append, 11);
	printf("%s\n", destino);
	
	char destino2[80] = "Helsdfgsdflo ee ";
	char append2[] = "Wosdfgdfrld!";
	unsigned int size2 = strlcat(destino2, append2, 11);
	printf("%s\n", destino2);
	printf("Valor devuelto mi función: %d\n", size);
	printf("Valor función oficial: %d", size2);
}
