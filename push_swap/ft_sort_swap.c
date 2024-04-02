/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 12:49:02 by ehedeman          #+#    #+#             */
/*   Updated: 2024/03/20 12:20:18 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_list **stack)
{
	t_list	*second;
	t_list	*first;
	int		temp_value;
	int		temp_index;

	if (!stack[0])
		return ;
	if (stack[0]->next != 0)
	{
		first = stack[0];
		second = first->next;
		temp_value = first->value;
		first->value = second->value;
		second->value = temp_value;
		temp_index = first->index;
		first->index = second->index;
		second->index = temp_index;
	}
}

void	swap_b(t_list **stack_b)
{
	ft_printf("sb\n");
	swap(stack_b);
}

void	swap_a(t_list **stack_a)
{
	ft_printf("sa\n");
	swap(stack_a);
}

void	swap_swap(t_list **stack_a, t_list **stack_b)
{
	ft_printf("ss\n");
	swap(stack_a);
	swap(stack_b);
}
