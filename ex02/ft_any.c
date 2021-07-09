// #include <stdio.h>

int	ft_any(char **tab, int(*f)(char *))
{
	while (*tab)
	{
		if (f(*tab))
			return (1);
		tab++;
	}
	return (0);
}

// int	ft_is_empty(char *str)
// {
// 	if (*str)
// 		return (0);
// 	return (1);
// }

// int	main(void)
// {
// 	char	*tab[] = {"hello", "world", NULL};

// 	printf("%d\n", ft_any(tab, &ft_is_empty));
// }
