/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljalikak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:34:01 by ljalikak          #+#    #+#             */
/*   Updated: 2019/04/02 14:47:33 by ljalikak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int sum;
	int i;

	sum = 1;
	i = 1;
	if (nb == 0)
		return (1);
	else if (nb > 0 && nb < 13)
	{
		while (nb >= i)
		{
			sum *= i;
			i++;
		}
		return (sum);
	}
	return (0);
}
