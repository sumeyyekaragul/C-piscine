/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:10:04 by skaragul          #+#    #+#             */
/*   Updated: 2022/09/08 18:21:56 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	count;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	count = 1;
	while (power > 0)
	{
		count *= nb;
		power--;
	}
	return (count);
}
