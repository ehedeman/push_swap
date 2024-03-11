/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:12:10 by ehedeman          #+#    #+#             */
/*   Updated: 2024/03/11 13:32:19 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (argc == 1)
	{
		write(2, "1: Error\n", 6);
		return (0);
	}
	stack_a = stack_init();
	stack_b = stack_init();
	if (!stack_a || !stack_b)
		return (0);
	if (stack_a_init(stack_a, argv, argc, 0) == 1)
	{
		free(stack_a);
		free(stack_b);
		return (0);
	}
	free_lst(stack_a);
	free_lst(stack_b);
	return (0);
}
