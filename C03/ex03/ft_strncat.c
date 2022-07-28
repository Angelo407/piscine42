/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 15:10:32 by aprosper          #+#    #+#             */
/*   Updated: 2021/07/22 15:37:46 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>
//#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{	
	int				i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[9] = "Salut";
	char	src[] = "Toi";
	unsigned int	nb = 4;	
	ft_strncat(dest, src, nb); 

	char	dest_t[9] = "Salut";
	char	src_t[] = "Toi";
	unsigned int nb_t = 4;
	strncat(dest_t, src_t, nb_t);

	printf("%s\n", dest);
	printf("%s\n", dest_t);
}*/
