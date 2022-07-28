/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 18:33:05 by aprosper          #+#    #+#             */
/*   Updated: 2021/07/15 10:24:51 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;
	int	display_lenght;

	i = 0;
	display_lenght = 0;
	while (*(str + i) != '\0')
	{
		i++;
		display_lenght++;
	}
	return (display_lenght);
}
/*int main()
{
	char	a[] = {"Hello World"};
	int i = ft_strlen(a);
	
	char c = i + 70;
	write (1, &c, 1);
	
	printf("%d\n", i);
}
//ft_putchar(97);// ou ft_putchar('a')
//la variable display_lenght ne sert a rien ; je peux simplement retourner i*/
