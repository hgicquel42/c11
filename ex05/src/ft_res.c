#include "ft.h"

t_res	ft_ok(int result)
{
	t_res	res;

	res.result = result;
	return (res);
}

t_res	ft_err(char *error)
{
	t_res	res;

	res.error = error;
	return (res);
}
