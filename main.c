#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void *ft_memset(void *s, int c, size_t n);

int main()
{
	char test[50] = "Tata Boutelamine, un son unique";
	//char test2[50] = "Tata Boutelamine, un son unique";

	printf("Avant memset : %s\n", test);
	ft_memset(test + 13, '.', 8);
	printf("Apres ft_memset : %s\n", test);
	memset(test + 13, '.', 8);
	printf("Apres memset : %s\n", test);
}
