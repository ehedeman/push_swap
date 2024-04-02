/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg_sort_three_to_five.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:15:21 by ehedeman          #+#    #+#             */
/*   Updated: 2024/03/21 13:56:49 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **a)
{
	if (find_min(a[0]) == a[0]->index)
	{
		rotate_rev_a(a);
		swap_a(a);
	}
	else if (find_max(a[0]) == a[0]->index)
	{
		rotate_a(a);
		if (check_sort(a[0]))
			swap_a(a);
	}
	else
	{
		if (find_index(a[0], find_max(a[0])) == 1)
			rotate_rev_a(a);
		else
			swap_a(a);
	}
}

void	sort_four(t_list **a, t_list **b)
{
	int	index;

	if (!check_sort(a[0]))
		return ;
	index = find_index(a[0], find_min(a[0]));
	if (index == 1)
		rotate_a(a);
	else if (index == 2)
	{
		rotate_a(a);
		rotate_a(a);
	}
	else if (index == 3)
		rotate_rev_a(a);
	if (!check_sort(a[0]))
		return ;
	push_b(a, b);
	sort_three(a);
	push_a(a, b);
}

void	sort_five(t_list **a, t_list **b)
{
	int	index;

	index = find_index(a[0], find_min(a[0]));
	if (index == 1)
		rotate_a(a);
	else if (index == 2)
	{
		rotate_a(a);
		rotate_a(a);
	}
	else if (index == 3)
	{
		rotate_rev_a(a);
		rotate_rev_a(a);
	}
	else if (index == 4)
		rotate_rev_a(a);
	if (!check_sort(a[0]))
		return ;
	push_b(a, b);
	sort_four(a, b);
	push_a(a, b);
}

//index = get_distance(a, get_min(a, -1));