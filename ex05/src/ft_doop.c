#include "ft.h"

typedef struct s_req
{
	int	x;
	int	y;
	char op;
}	t_req;

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

t_res ft_route(t_req req)
{
	if (req.op == '+')
		return (ft_ok(req.x + req.y));
	if (req.op == '-')
		return (ft_ok(req.x - req.y));
	if (req.op == '*')
		return (ft_ok(req.x * req.y));
	if (req.op == '/')
		return (ft_div(req.x, req.y));
	if (req.op == '%')
		return (ft_div(req.x, req.y));
	return (ft_ok(0));
}

int	main(int argc, char **argv)
{
	t_req	req;
	t_res	res;
	
	if (argc != 4)
		return (1);
	req.x = ft_atoi(argv[1]);
	req.y = ft_atoi(argv[3]);
	req.op = argv[2][0];
	res = ft_route(req);
	if (res.error)
	{
		ft_putstr(res.error);
		return (1);
	}
	else
	{
		ft_putnbr(res.result);
		return (0);
	}
}