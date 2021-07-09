// #include <stdio.h>

int	ft_count_if(char **tab, int length, int(*f)(char *))
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (i < length)
	{
		if (f(tab[i]))
			n++;
		i++;
	}
	return (n);
}

// int	ft_is_empty(char *str)
// {
// 	if (*str)
// 		return (0);
// 	return (1);
// }

// int	main(void)
// {
// 	char	*tab[] = {"hello", "", "world", "", ""};

// 	printf("%d\n", ft_count_if(tab, 5, &ft_is_empty));
// }
