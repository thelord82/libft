#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include "libft.h"

int	main(void)
{
	//ft_atoi
	/*char c[50] = "++101010";
	printf("%d\n", ft_atoi(c));
	printf("%d", atoi(c));*/

	//ft_strlcat
	/*char src[] = "Ah non";
	char dst[] = " Pas Bob Hartley";

	printf("%lu\n", ft_strlcat(dst, src, 17));
	printf("%lu", strlcat(dst, src, 17));*/

	//ft_strchr
	/*char str[] = "";
	char ch;

	ch = '\0';
	

	printf("String apres: %c est: %s\n", ch, ft_strchr(str, ch));
	printf("String apres: %c est: %s\n", ch, strchr(str, ch));
	printf("%c", '\0');*/

	//ft_strrchr
	/*const char str[] = "www.google.com";
	const char ch = 'a';
	char *ret;

	ret = ft_strrchr(str, ch);

	printf("Derniere occurence de %c est: %s\n", ch, ret);*/

	//ft_strncmp
	/*char str[] = "test\200";
	char str2[] = "test\0";

	printf("%d\n", ft_strncmp(str, str2, 6));
	printf("%d", strncmp(str, str2, 6));*/

	//ft_memchr
	/*const char str[] = "www.google.com";
	const char ch = '.';
	char *ret;
	char *ret2;

	ret = ft_memchr(str, ch, 4);
	ret2 = memchr(str, ch, 4);

	printf("Avec ft_memchr : String apres: %c est: %s\n", ch, ret);
	printf("Avec memchr : String apres: %c est: %s\n", ch, ret2);
	
	printf("Test %s\n", ft_memchr(((void *)0), '\0', 0x20));
	printf("Test %s\n", memchr(((void *)0), '\0', 0x20));*/

	//ft_memcmp
	/*char str[] = "allo ";
	char str2[] = "allo";

	printf("%d\n", ft_memcmp(str, str2, ft_strlen(str)));
	printf("%d", memcmp(str, str2, ft_strlen(str)));*/

	//ft_strnstr
	/*const char *largestring = "lorem ipsum dolor sit amet";
	const char *smallstring = "dolor";

	printf("Test FT: %s\n", ft_strnstr(largestring, smallstring, 15));
	printf("Test OG: %s", strnstr(largestring, smallstring, 15));*/

	//ft_memmove
	/*char src[] = "bonjour";
	char *dest;
	dest = src + 1;

	printf ("String copie FT: %s\n", ft_memmove(dest, src, 7));
	printf ("String copie OG: %s\n", memmove(dest, src, 7));*/


	//ft_memcpy
	/*char src[] = "";
	char dest[] = "allo mon ti coco";

	printf ("String copie FT: %s\n", ft_memcpy(((void *)0), ((void *)0), 3));
	printf ("String copie OG: %s\n", memcpy(((void *)0), ((void *)0), 3));*/

	//ft_calloc
	/*char	*str;
	str = ft_calloc(30, 1);
	if (!str)
		write(1, "NULL", 4);
	else
		write(1, str, 30);*/
	//ft_strdup
	/*char	str[] = "lorem ipsum dolor sit amet";
	printf("String copie FT: %s\n", ft_strdup(str));
	printf("String copie OG: %s\n", strdup(str));
	printf("%lu", ft_strlen(str) + 1);*/

	//ft_substr
	/*char st[] = "Ceci est une phrase";
	printf("%s\n", ft_substr(st, 21, 2));*/

	//ft_strtrim
	char str[] = "          ";
	char find[] = " ";
	printf("%s\n", ft_strtrim(str, find));
}
