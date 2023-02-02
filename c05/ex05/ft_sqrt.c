/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:43:13 by skaragul          #+#    #+#             */
/*   Updated: 2022/09/11 18:23:53 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	nb2;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 2;
	nb2 = nb;
	if (nb2 > 1)
	{
		while (i * i <= nb2)
		{
			if (i * i == nb2)
				return (i);
			else if (i > 46340)
				return (0);
			i++;
		}
	}
	return (0);
}
