/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg_radix_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:10:43 by ehedeman          #+#    #+#             */
/*   Updated: 2024/03/28 10:36:30 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_list **a, t_list **b, int i, int j)
{
	t_list	*temp;
	int		size;
	int		max_bits;

	temp = a[0];
	size = ft_lstsize(temp);
	max_bits = find_max_bits(a);
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			temp = a[0];
			if (((temp->index >> i) & 1) == 1)
				rotate_a(a);
			else
				push_b(a, b);
			j++;
		}
		while (ft_lstsize(b[0]) != 0)
			push_a(a, b);
		i++;
	}
}
