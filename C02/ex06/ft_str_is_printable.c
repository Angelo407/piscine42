/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 14:41:20 by aprosper          #+#    #+#             */
/*   Updated: 2021/07/19 16:12:26 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	str[] = "~ K9"; 

	printf("%d\n", ft_str_is_printable(str));

//	un caste c est transformer une valeur en un autre type de valeur:
	int i = 33;
	char j = '!';
	
	char k = (char) i;
	printf("k = %c\n", k);
	
	int l = (int) j;
	printf("l = %d\n", l);
}*/
