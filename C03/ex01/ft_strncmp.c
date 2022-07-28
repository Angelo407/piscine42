/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:38:31 by aprosper          #+#    #+#             */
/*   Updated: 2021/07/22 15:06:48 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <string.h>
//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	s1[] = "salut";
	char	s2[] = "salut";

	unsigned int	n = 4;

	printf("ft_strncmp(%s, %s, %d) :  %d\n", s1, s2, n, ft_strncmp(s1, s2, n)); 
	printf("strncmp(%s, %s, %d) :  %d\n", s1, s2, n, strncmp(s1, s2, n)); 
}*/
