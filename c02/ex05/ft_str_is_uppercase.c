/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:25:37 by skaragul          #+#    #+#             */
/*   Updated: 2022/09/01 14:39:53 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	c;

	if (str[0] == '\0')
		return (1);
	c = 0;
	while (str[c] != '\0')
	{
		if (!(str[c] >= 'A' && str[c] <= 'Z'))
			return (0);
		c++;
	}
	return (1);
}
/*
int main(){
	int c = ft_str_is_uppercase("2ADJJ");
	printf("%d",c);
	return 0;
}
*/
