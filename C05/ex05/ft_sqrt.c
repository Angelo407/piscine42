/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:37:58 by aprosper          #+#    #+#             */
/*   Updated: 2021/07/27 15:10:04 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i < 46341)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	printf("sqrt of %d is %d\n", -4042, ft_sqrt(-4042));
    printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
    printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
    printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
    printf("sqrt of %d is %d\n", 1640045925, ft_sqrt(1640045925));
    printf("sqrt of %d is %d\n", 2147395600, ft_sqrt(2147395600));
    printf("sqrt of %d is %d\n", 2147483646, ft_sqrt(2147483646));
    printf("sqrt of %d is %d\n", 35952016, ft_sqrt(35952016));
    printf("sqrt of %d is %d\n", 2035431737, ft_sqrt(2035431737));
    printf("sqrt of %d is %d\n", 45091225, ft_sqrt(45091225));
    printf("sqrt of %d is %d\n", 1839828803, ft_sqrt(1839828803));
    printf("sqrt of %d is %d\n", 12645136, ft_sqrt(12645136));
    printf("sqrt of %d is %d\n", 748993060, ft_sqrt(748993060));
    printf("sqrt of %d is %d\n", 509991889, ft_sqrt(509991889));
    printf("sqrt of %d is %d\n", 68825150, ft_sqrt(68825150));
    printf("sqrt of %d is %d\n", 237129201, ft_sqrt(237129201));
    printf("sqrt of %d is %d\n", 105771407, ft_sqrt(105771407));
}*/
