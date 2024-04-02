/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:25:55 by ehedeman          #+#    #+#             */
/*   Updated: 2024/03/28 11:50:53 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_da_stack(t_list *lst)
{
	if (!lst)
		return ;
	while (lst->next)
	{
		ft_printf("%i, Index: %i\n", lst->value, lst->index);
		lst = lst->next;
	}
	ft_printf("%i, Index: %i\n\n", lst->value, lst->index);
}

int	str_to_int(t_list **stack, char **args)
{
	t_list	*new;
	int		i;

	i = 0;
	while (args[i])
	{
		new = ft_lstnew(ft_atoi(args[i]));
		if (!new)
		{
			write(2, "Error\n", 6);
			return (1);
		}
		ft_lstadd_back(stack, new);
		i++;
	}
	return (0);
}

int	stack_a_init(t_list **stack, char **argv, int argc, int i)
{
	char	**args;

	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		if (!args)
		{
			write(2, "Error\n", 6);
			return (1);
		}
	}
	else
		args = argv + 1;
	while (args[i])
	{
		if (check_format(args, argc, 0, 0) == 1)
			return (1);
		i++;
	}
	if (str_to_int(stack, args) == 1)
		return (1);
	free_array(args, argc);
	assign_index(stack);
	return (0);
}

t_list	**stack_init(void)
{
	t_list	**stack;

	stack = (t_list **)malloc(sizeof(t_list));
	if (!stack)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	stack[0] = NULL;
	return (stack);
}
