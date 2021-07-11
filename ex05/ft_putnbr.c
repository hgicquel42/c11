#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int	x;
	char			c;

	if (nb < 0)
	{
		write(1, "-", 1);
		x = -nb;
	}
	else
	{
		x = nb;
	}
	if (x >= 10)
		ft_putnbr(x / 10);
	c = '0' + (x % 10);
	write(1, &c, 1);
}
