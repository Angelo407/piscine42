/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 16:44:21 by aprosper          #+#    #+#             */
/*   Updated: 2021/07/25 18:44:14 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1 || index == 2)
		return (1);
	else
		return ((ft_fibonacci(index - 1)) + (ft_fibonacci(index - 2)));
}

/*int	main(void)
{
	int	index = 4;

	printf("%d\n", ft_fibonacci(index));
	return (0);
}*/
