#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		write(1, "-", 1);
		c = '0' - (nb % 10);
	}
	else
		c = '0' + (nb % 10);
	if (nb <= -10)
		ft_putnbr(-(nb / 10));
	if (nb >= 10)
		ft_putnbr(nb / 10);
	write(1, &c, 1);
}
