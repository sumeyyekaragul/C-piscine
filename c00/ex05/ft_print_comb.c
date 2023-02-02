/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 13:33:55 by skaragul          #+#    #+#             */
/*   Updated: 2022/08/28 15:39:11 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	i;
	int	k;
	int	l;

	i = '0';
	while (i <= '7')
	{
		k = i + 1;
		while (k <= '8')
		{
			l = k + 1;
			while (l <= '9')
			{
				write(1, &i, 1);
				write(1, &k, 1);
				write(1, &l, 1);
				if (i != '7')
					write(1, ",  ", 2);
				l++;
			}
			k++;
		}
	i++;
	}
}

/*
int main(){
    ft_print_comb();
    return 0;
}
*/
