/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:20:11 by aprosper          #+#    #+#             */
/*   Updated: 2021/07/19 14:24:30 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

/*int	main(void)
{
	char	dest[50];
	int	i;

	char	src[] = "salut";
	i = 0;
	ft_strcpy(dest, src);
	while (dest[i] != '\0')
	{
		ft_putchar(dest[i]);
		i++;
	}
//	ligne 30 : je pourrais aussi mettre dest[i] = '\0';
}*/
