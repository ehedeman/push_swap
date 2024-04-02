/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_rotate_rev.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:46:39 by ehedeman          #+#    #+#             */
/*   Updated: 2024/03/11 13:08:06 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_reverse(t_list **stack)
{
	t_list	*first;
	int		size;

	if (!stack || !stack[0])
		return ;
	size = ft_lstsize(stack[0]);
	first = stack[0];
	while (size > 1)
	{
		stack[0] = first->next;
		ft_lstadd_back(stack, first);
		first = stack[0];
		size--;
	}
}

void	rotate_rev_a(t_list **stack_a)
{
	ft_printf("rra\n");
	rotate_reverse(stack_a);
}

void	rotate_rev_b(t_list **stack_b)
{
	ft_printf("rrb\n");
	rotate_reverse(stack_b);
}

void	rotate_rev_rotate(t_list **stack_a, t_list **stack_b)
{
	ft_printf("rrr\n");
	rotate_reverse(stack_a);
	rotate_reverse(stack_b);
}
