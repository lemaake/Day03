/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemaake <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 15:19:03 by lemaake           #+#    #+#             */
/*   Updated: 2020/07/13 15:22:29 by lemaake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

voidft_swap(int *a, int *b)
{
	char c;
	c = *a;
	*a = *b;
	*b = c;
}
		
