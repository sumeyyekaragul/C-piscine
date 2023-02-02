/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 19:53:34 by skaragul          #+#    #+#             */
/*   Updated: 2022/08/28 15:43:40 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	po;
	char	ne;

	po = 'P';
	ne = 'N';
	if (n < 0)
	{
		write(1, &ne, 1);
	}
	else
	{
		write(1, &po, 1);
	}
}

/*
int main(){
    ft_is_negative(6);
    return 0;
}
*/
