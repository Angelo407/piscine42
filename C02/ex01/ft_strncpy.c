/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:37:50 by aprosper          #+#    #+#             */
/*   Updated: 2021/07/17 11:37:13 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{	
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}	
	return (dest);
}

/*int	main(void)
{
	char	src[20] = "Hello World";
	char	dest[3];
//	unsigned int n;
	ft_strncpy(dest, src, 20);
	printf("%s\n",dest);
//	ligne 28 : pour tester je peux mettre 'x' pour voir si ca copie la suite
//	ligne 28 : je peux aussi ecrire simplement 0 a la place de '\0'	
}*/
