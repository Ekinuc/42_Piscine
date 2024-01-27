/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euc <euc@student.42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:57:28 by euc               #+#    #+#             */
/*   Updated: 2023/07/12 18:05:44 by euc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	r_alph;

	r_alph = 'z';
	while (r_alph >= 'a')
	{
		write(1, &r_alph, 1);
		r_alph--;
	}
}
