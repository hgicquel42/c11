// #include <unistd.h>

// void	ft_putnbr(int n)
// {
// 	char	c;

// 	c = '0' + n;
// 	write(1, &c, 1);
// }

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}

// int	main()
// {
// 	int	tab[] = { 2, 3, 4, 5, 6 };
// 	ft_foreach(tab, 5, &ft_putnbr);
// }
