/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:08:48 by skaragul          #+#    #+#             */
/*   Updated: 2022/09/01 19:20:22 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{	
		if (str[c] >= 97 && str[c] <= 122)
			str[c] -= 32;
		c++;
	}
	return (str);
}
/*
int main(){
	char str[] = "ahJDhah";
	printf("%s",ft_strupcase(str));
}
*/
