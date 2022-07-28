/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 11:43:27 by aprosper          #+#    #+#             */
/*   Updated: 2021/07/27 13:26:05 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	temp;

	temp = nb;
	i = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 0)
	{
		while (i < power)
		{
			nb = nb * temp;
			i++;
		}
		return (nb);
	}
	else
		return (0);
}

/*int	main(void)
{
	printf("%d ^ %d = %d\n", -801, -569, ft_iterative_power(-801, -569)); // 0
    printf("%d ^ %d = %d\n", 0, 0, ft_iterative_power(0, 0)); // 1
    printf("%d ^ %d = %d\n", 2454, 0, ft_iterative_power(2454, 0)); // 1
    printf("%d ^ %d = %d\n", 1206, 1, ft_iterative_power(1206, 1)); // 1206
    printf("%d ^ %d = %d\n", 0, 2, ft_iterative_power(0, 2)); // 0
    printf("%d ^ %d = %d\n", 2, 4, ft_iterative_power(2, 4)); // 16
    printf("%d ^ %d = %d\n", 4, 5, ft_iterative_power(4, 5)); // 1024
    printf("%d ^ %d = %d\n", 6, 6, ft_iterative_power(6, 6)); // 46656
    printf("%d ^ %d = %d\n", -5, 7, ft_iterative_power(-5, 7)); // -78125
    printf("%d ^ %d = %d\n", -4, 9, ft_iterative_power(-4, 9)); // / -262144
    printf("%d ^ %d = %d\n", -3, 10, ft_iterative_power(-3, 10)); // 59049
}*/
