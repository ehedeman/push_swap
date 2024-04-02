/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:44:49 by ehedeman          #+#    #+#             */
/*   Updated: 2024/03/21 12:46:30 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_list **a, t_list **b)
{
	if (ft_lstsize(a[0]) == 2)
		swap_a(a);
	else if (ft_lstsize(a[0]) == 3)
	{
		sort_three(a);
	}
	else if (ft_lstsize(a[0]) == 4)
	{
		sort_four(a, b);
	}
	else if (ft_lstsize(a[0]) == 5)
	{
		sort_five(a, b);
	}
	else
	{
		radix_sort(a, b, 0, 0);
	}
}
