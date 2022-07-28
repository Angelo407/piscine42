/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 09:16:08 by aprosper          #+#    #+#             */
/*   Updated: 2021/07/17 15:19:22 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if ((str[i] < 65 || str[i] > 122) && (str[i] > 90 || str[i] < 97))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	str[] = "";

	printf("%d\n", ft_str_is_alpha(str));
	avant le return(1) : tester avec printf("%d ", 0);
	avant le return(0) : tester avec printf("%d ", 1);
}*/
