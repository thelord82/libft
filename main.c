#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include "libft.h"

int	main(void)
{
	//ft_atoi
	/*char c[50] = "101010";
	printf("%d\n", ft_atoi(c));
	printf("%lu", strlen("fatalatapouette"));*/

	//ft_strlcat
	/*char src[] = "Ah non";
	char dst[] = " Pas Bob Hartley";

	printf("%lu\n", ft_strlcat(dst, src, 17));
	printf("%lu", strlcat(dst, src, 17));*/

	//ft_strchr
	/*const char str[] = "www.google.com";
	const char ch = 'a';
	char *ret;

	ret = ft_strchr(str, ch);

	printf("String apres: %c est: %s\n", ch, ret);*/

	//ft_strrchr
	/*const char str[] = "www.google.com";
	const char ch = 'a';
	char *ret;

	ret = ft_strrchr(str, ch);

	printf("Derniere occurence de %c est: %s\n", ch, ret);*/

	//ft_strncmp
	/*char str[] = "scandi nave";
	char str2[] = "scandinave ";

	printf("%d\n", ft_strncmp(str, str2, 7));
	printf("%d", strncmp(str, str2, 7));*/

	//ft_memchr
	/*const char str[] = "www.google.com";
	const char ch = '.';
	char *ret;
	char *ret2;

	ret = ft_memchr(str, ch, 4);
	ret2 = memchr(str, ch, 4);

	printf("Avec ft_memchr : String apres: %c est: %s\n", ch, ret);
	printf("Avec memchr : String apres: %c est: %s\n", ch, ret2);*/

	//ft_memcmp
	/*char str[] = "allo ";
	char str2[] = "allo";

	printf("%d\n", ft_memcmp(str, str2, ft_strlen(str)));
	printf("%d", memcmp(str, str2, ft_strlen(str)));*/

	//ft_strnstr
	/*const char *largestring = "Foo Bar Baz";
	const char *smallstring = "";

	printf("Test FT: %s\n", ft_strnstr(largestring, smallstring, 11));
	printf("Test OG: %s", strnstr(largestring, smallstring, 11));*/

	//ft_memmove
	char src[] = "fatalatapouette";
	char dest[50] = "arbre";

	printf ("String copie : %s\n", ft_memmove(dest, src, ft_strlen(src)));

	//ft_memcpy
	/*char src[] = "sweet";
	char dest[] = "allo mon ti coco";

	printf ("String copie : %s\n", memcpy(dest, src, ft_strlen(src)));*/
}
