#include "ft.h"
#include <stdlib.h>

t_res	ft_ok(int result)
{
	t_res	res;

	res.result = result;
	res.error = NULL;
	return (res);
}

t_res	ft_err(char *error)
{
	t_res	res;

	res.result = 0;
	res.error = error;
	return (res);
}
