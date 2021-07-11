/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 09:36:48 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/07 15:36:49 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort(int argc, char **argv, int(*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*t;

	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (j < argc - 1 - i)
		{
			if (cmp(argv[j], argv[j + 1]) > 0)
			{
				t = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = t;
			}
			j++;
		}
		i++;
	}
}

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int	size;

	size = 0;
	while (tab[size])
		size++;
	ft_sort(size, tab, cmp);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	argv[argc - 1] = 0;
	ft_advanced_sort_string_tab(&argv[1], &ft_strcmp);
	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
			j++;
		write(1, argv[i], j);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
