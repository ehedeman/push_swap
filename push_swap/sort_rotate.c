/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:20:25 by ehedeman          #+#    #+#             */
/*   Updated: 2024/03/11 13:08:18 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **stack)
{
	t_list	*first;

	if (!stack || !stack[0])
		return ;
	first = stack[0];
	stack[0] = first->next;
	ft_lstadd_back(stack, first);
}

void	rotate_a(t_list **stack_a)
{
	ft_printf("ra\n");
	rotate(stack_a);
}

void	rotate_b(t_list **stack_b)
{
	ft_printf("rb\n");
	rotate(stack_b);
}

void	rotate_rotate(t_list **stack_a, t_list **stack_b)
{
	ft_printf("rr\n");
	rotate(stack_a);
	rotate(stack_b);
}
