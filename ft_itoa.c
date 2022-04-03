#include<stdio.h>
#include <stdlib.h>
/*void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	nb = nb % 10 + 48;
	write(1, &nb, 1);
}*/
/*int tab_length(int nbr)
{
  int i = 1;
  if (nbr < 0)
  {
    nbr = -nbr;
    i++;
  }
  while (nbr >= 10)
  {
    nbr /= 10;
    i++;
  }
  return (i);
}
char *ft_itoa(int nbr)
{
  int nb;
  int i;
  char *tab;

  nb = nbr;
  i = tab_length(nbr) - 1;
  tab = (char *)malloc(sizeof(char) * tab_length(nbr) + 1);
  while (i >= 0)
  {
    if (nbr >= 10)
      ft_itoa(nbr / 10);
    tab[i] = nbr % 10 + 48;
    i--;
    nbr /= 10;
  }
  tab[i] = '\0';
  return (tab);
}
int main()
{
  char *test;
  int i = 0;

  test = ft_itoa(453228);
  while (test[i])
  {
    printf("%c", test[i]);
    i++;
  }
  printf("\n");
  return(0);
}*/
