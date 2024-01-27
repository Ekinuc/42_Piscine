/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euc <euc@student.42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:36:31 by euc               #+#    #+#             */
/*   Updated: 2023/07/31 18:54:23 by euc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	calc_full_size(int size, char **strs, int sep_len)
{
	int	final_size;
	int	i;

	i = 0;
	final_size = 0;
	while (i < size)
	{
		final_size += ft_strlen(strs[i]);
		final_size += sep_len;
		i++;
	}
	final_size -= sep_len;
	return (final_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_size;
	char	*ptr;
	char	*starting_adress;
	int		i;

	if (!size)
		return ((char *)malloc(sizeof(char)));
	full_size = calc_full_size(size, strs, ft_strlen(sep));
	starting_adress = (char *)malloc((full_size + 1) * sizeof(char));
	if (!starting_adress)
		return (0);
	ptr = starting_adress;
	i = -1;
	while (++i < size)
	{
		ft_strcpy(ptr, strs[i]);
		ptr += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(ptr, sep);
			ptr += ft_strlen(sep);
		}
	}
	*ptr = '\0';
	return (starting_adress);
}
