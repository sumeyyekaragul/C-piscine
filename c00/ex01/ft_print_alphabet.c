/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:25:11 by skaragul          #+#    #+#             */
/*   Updated: 2022/08/28 15:41:14 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	i;

	i = 97;
	while (i <= 122)
	{	
		write(1, &i, 1);
		i++;
	}
}

/*
 int main(){
     ft_print_alphabet();
    return 0;
 }
 */
