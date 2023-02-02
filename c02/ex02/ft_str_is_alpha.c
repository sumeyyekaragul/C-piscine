/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:23:59 by skaragul          #+#    #+#             */
/*   Updated: 2022/09/02 15:35:49 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	c;

	if (str[0] == '\0')
		return (1);
	c = 0;
	while (str[c] != '\0')
	{
		if (!(str[c] >= 65 && str[c] <= 122))
		{
			if (!(str[c] >= 91 && str[c] <= 96))
				return (0);
		}
		c++;
	}
	return (1);
}
/*
int main(){

	char *str;
	str = "23";
	int c = ft_str_is_alpha(str);
	printf("%d",c);
}
*/
