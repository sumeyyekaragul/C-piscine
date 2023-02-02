/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:23:17 by skaragul          #+#    #+#             */
/*   Updated: 2022/08/31 15:44:56 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	buff;
	int	i;

	while (size >= 0)
	{
		i = 0;
		while (i < size -1)
		{	
			if (tab[size] > tab[size + 1])
			{
				buff = tab[size];
				tab[size] = tab[size + 1];
				tab[size + 1] = buff;
			}
			i++;
		}
		size--;
	}
}
