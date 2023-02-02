/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 20:03:30 by skaragul          #+#    #+#             */
/*   Updated: 2022/09/14 15:45:55 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	*dest;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	dest = (int *)malloc(len * sizeof(int));
	if (!dest)
	{
		*range = 0;
		return (0);
	}
	i = 0;
	*range = dest;
	while (i < len)
	{
		dest[i] = min + i;
		i++;
	}
	return (len);
}
