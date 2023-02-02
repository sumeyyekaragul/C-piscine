/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:50:21 by skaragul          #+#    #+#             */
/*   Updated: 2022/08/28 16:57:24 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char x1, char x2)
{
	write(1, &x1, 1);
	write(1, &x2, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print(i / 10 + 48, i % 10 + 48);
			write(1, " ", 1);
			ft_print(j / 10 + 48, j % 10 + 48);
			if (!(i == 98 && j == 99))
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
/*
int main(){
    ft_print_comb2();
	return 0;
}
*/
