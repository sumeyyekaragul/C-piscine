/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:59:49 by skaragul          #+#    #+#             */
/*   Updated: 2022/09/08 19:14:16 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	c;

	if (nb == 2)
		return (1);
	c = nb - 1;
	if (nb <= 1)
		return (0);
	while (c > 1)
	{
		if (nb % c == 0)
			return (0);
		c--;
	}
	return (1);
}
