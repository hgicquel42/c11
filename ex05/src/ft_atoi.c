int	ft_satoi(char *str, int i, int s)
{
	int	n;
	int	x;

	n = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n *= 10;
		x = str[i] - '0';
		if (s)
			n -= x;
		else
			n += x;
		i++;
	}
	return (n);
}

int	ft_atoi(char *str)
{
	int		i;
	int		s;

	i = 0;
	s = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = !s;
		i++;
	}
	return (ft_satoi(str, i, s));
}
