/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 15:22:07 by aprosper          #+#    #+#             */
/*   Updated: 2021/07/15 15:15:23 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	y;

	y = *a / *b;
	*b = *a % *b;
	*a = y;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 15;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("\na = %d\n", a);
	printf("b = %d \n", b);
}*/
