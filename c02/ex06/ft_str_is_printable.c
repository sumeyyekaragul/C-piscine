/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:41:14 by skaragul          #+#    #+#             */
/*   Updated: 2022/09/01 18:06:52 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	c;

	if (str[0] == '\0')
		return (1);
	c = 0;
	while (str[c] != '\0')
	{
		if (!(str[c] >= 32 && str[c] <= 126))
			return (0);
		c++;
	}
	return (1);
}
/*
int main(){
	char *str;
	str = "jd";
	int c = ft_str_is_printable(str);
	printf("%d",c);
}
*/
