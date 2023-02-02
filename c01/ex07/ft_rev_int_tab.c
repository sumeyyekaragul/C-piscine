/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:16:40 by skaragul          #+#    #+#             */
/*   Updated: 2022/08/31 15:21:54 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	buff;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		buff = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = buff;
	}
}
