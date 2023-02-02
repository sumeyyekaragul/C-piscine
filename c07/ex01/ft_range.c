/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:55:04 by skaragul          #+#    #+#             */
/*   Updated: 2022/09/17 13:31:55 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;
	int	len;

	if (min >= max)
		return (0);
	len = max - min;
	dest = (int *)malloc(len * sizeof(int));
	if (!dest)
		return (0);
	i = 0;
	while (i < len)
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}
