/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:56:07 by skaragul          #+#    #+#             */
/*   Updated: 2022/09/08 19:47:58 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	end;

	if (nb < 0)
		return (0);
	end = 1;
	while (nb > 0)
	{
		end *= nb;
		nb--;
	}
	return (end);
}
