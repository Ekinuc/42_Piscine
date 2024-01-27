/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euc <euc@student.42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:42:00 by euc               #+#    #+#             */
/*   Updated: 2023/07/31 16:58:46 by euc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*ptr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	ptr = (int *)malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}
	*range = ptr;
	return (size);
}
