/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_inverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 09:22:45 by aprosper          #+#    #+#             */
/*   Updated: 2021/07/26 19:51:19 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char 	ft_str_inverse(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	printf("%d\n", i);
	while (i > 0)
	{
//		str[i] = str[i - 1];
		i--;
		printf("%c",str[i]);
	}

	return (str[i]);
}

int	main(void)
{
	char	a[] = "123456789";

	ft_str_inverse(a);

//	printf("%s", a);

}
