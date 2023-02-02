/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 19:08:05 by skaragul          #+#    #+#             */
/*   Updated: 2022/09/01 19:19:11 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 65 && str[c] <= 90)
			str[c] += 32;
		c++;
	}
	return (str);
}
/*
int main(){
	char str[] = "HVHfgf";
	printf("%s",ft_strlowcase(str));
}
*/
