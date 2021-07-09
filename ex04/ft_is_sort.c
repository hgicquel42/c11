// #include <stdio.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;

	i = 1;
	while (i < length)
	{
		if (f(tab[i - 1], tab[i]) > 0)
			return (0);
		i++;
	}
	return (1);
}

// int	ft_intcmp(int x, int y)
// {
// 	return (x - y);
// }

// int	main(void)
// {
// 	int	tab[] = {1, 2, 1, 4, 5};

// 	printf("%d\n", ft_is_sort(tab, 5, &ft_intcmp));
// }