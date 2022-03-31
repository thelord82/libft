#include<stdio.h>
#include<string.h>
#include<ctype.h>

int ft_toupper(int n);

int	main(void)
{
	char c;
	c = '2';

	printf("%c\n", ft_toupper(c));
	printf("%c", toupper(c));
}
