/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:33:13 by skaragul          #+#    #+#             */
/*   Updated: 2022/09/17 16:35:47 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_srclen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_d_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_srclen(strs[i]) + ft_srclen(sep);
		i++;
	}
	len -= ft_srclen(sep);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	char	*d;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	len = ft_d_len(size, strs, sep);
	d = (char *)malloc(len * sizeof(char) + 1);
	if (!d)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy(d, strs[i]);
		d += ft_srclen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(d, sep);
			d += ft_srclen(sep);
		}
		i++;
	}
	d -= len;
	return (d);
}
