/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:12:10 by ehedeman          #+#    #+#             */
/*   Updated: 2024/03/28 11:59:41 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(t_list **a, t_list **b)
{
	if (a)
		free(a);
	if (b)
		free(b);
	write(2, "Error\n", 6);
	exit(1);
}

// #inc
int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (argc == 1 || !*argv[1])
		return (0);
	stack_a = stack_init();
	stack_b = stack_init();
	if (!stack_a || !stack_b)
		error(stack_a, stack_b);
	if (stack_a_init(stack_a, argv, argc, 0) == 1)
	{
		free(stack_a);
		free(stack_b);
		return (0);
	}
	if (check_sort(*stack_a))
		sort(stack_a, stack_b);
	free_lst(stack_a);
	free_lst(stack_b);
	return (0);
}
