/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:02:15 by aprosper          #+#    #+#             */
/*   Updated: 2021/07/26 13:08:17 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc > 1)
	{
		j = 1;
		while (j < argc)
		{
			i = 0;
			while (argv[j][i] != 0)
			{
				ft_putchar(argv[j][i]);
				i++;
			}
			write(1, "\n", 1);
			j++;
		}
	}
	return (0);
}
