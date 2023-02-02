/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 19:33:14 by skaragul          #+#    #+#             */
/*   Updated: 2022/09/07 16:25:57 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	st;
	int	tf;

	st = 0;
	tf = 0;
	if (to_find[tf] == '\0')
		return (str);
	while (str[st] != '\0')
	{
		while ((str[st + tf] == to_find[tf]) && (str[st + tf] != '\0'))
			tf++;
		if (to_find[tf] == '\0')
			return (str + st);
		st++;
		tf = 0;
	}
	return (0);
}
