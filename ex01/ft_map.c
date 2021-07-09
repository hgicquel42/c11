#include <stdlib.h>

// #include <unistd.h>

// void	ft_putnbr(int n)
// {
// 	char	c;

// 	c = '0' + n;
// 	write(1, &c, 1);
// }

// void	ft_foreach(int *tab, int length, void(*f)(int))
// {
// 	int	i;

// 	i = 0;
// 	while (i < length)
// 		f(tab[i++]);
// }

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*res;

	i = 0;
	res = malloc(length * sizeof(int));
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}

// int	ft_increment(int x)
// {
// 	return (x + 1);
// }

// int	main(void)
// {
// 	int	tab[] = {2, 3, 4, 5, 6};
// 	ft_foreach(ft_map(tab, 5, &ft_increment), 5, &ft_putnbr);
// }
