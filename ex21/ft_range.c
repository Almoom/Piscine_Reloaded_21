/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljalikak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 20:28:13 by ljalikak          #+#    #+#             */
/*   Updated: 2019/04/02 21:07:28 by ljalikak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*t;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	if (!(t = (int*)malloc(sizeof(int) * (max - min))))
		return (NULL);
	while (i < max - min)
	{
		t[i] = min + i;
		i++;
	}
	return (t);
}
