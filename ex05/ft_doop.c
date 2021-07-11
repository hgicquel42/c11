#include "ft.h"
#include <unistd.h>

t_res	ft_div(int x, int y)
{
	if (y == 0)
		return (ft_err("Stop : division by zero\n"));
	return (ft_ok(x / y));
}

t_res	ft_mod(int x, int y)
{
	if (y == 0)
		return (ft_err("Stop : modulo by zero\n"));
	return (ft_ok(x % y));
}

t_res	ft_route(int x, int y, char op)
{
	if (op == '+')
		return (ft_ok(x + y));
	if (op == '-')
		return (ft_ok(x - y));
	if (op == '*')
		return (ft_ok(x * y));
	if (op == '/')
		return (ft_div(x, y));
	if (op == '%')
		return (ft_mod(x, y));
	return (ft_ok(0));
}

int	main(int argc, char **argv)
{
	int		x;
	int		y;
	char	op;
	t_res	res;

	if (argc != 4)
		return (1);
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[3]);
	op = argv[2][0];
	res = ft_route(x, y, op);
	if (res.error)
	{
		while (*res.error)
			write(1, res.error++, 1);
		return (1);
	}
	else
	{
		ft_putnbr(res.result);
		write(1, "\n", 1);
		return (0);
	}
}
