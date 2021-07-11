#ifndef FT_H
# define FT_H

typedef struct s_res
{
	int		result;
	char	*error;
}	t_res;

t_res	ft_ok(int result);
t_res	ft_err(char *error);

int		ft_atoi(char *str);

void	ft_putstr(char *str);

void	ft_putnbr(int n);

#endif