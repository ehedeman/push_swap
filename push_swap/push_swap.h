/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:23:53 by ehedeman          #+#    #+#             */
/*   Updated: 2024/03/27 10:16:03 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdlib.h>
#include <unistd.h>
#include "t_list.h"
#include "libft/libft.h"

t_list	**stack_init(void);
int		stack_a_init(t_list **stack, char **argv, int argc, int i);
int		str_to_int(t_list **stack, char **args);
void	free_lst(t_list **stack);
void	free_array(char	**array, int argc);
int		check_format(char **arg, int argc, int i, int ret);
void	print_da_stack(t_list *lst);
void	assign_index(t_list **stack);
void	swap_a(t_list **stack);
void	swap_b(t_list **stack);
void	push_a(t_list **stack_a, t_list **stack_b);
void	push_b(t_list **stack_a, t_list **stack_b);
void	swap_swap(t_list **stack_a, t_list **stack_b);
void	rotate(t_list **stack);
void	rotate_a(t_list **stack_a);
void	rotate_b(t_list **stack_b);
void	rotate_rotate(t_list **stack_a, t_list **stack_b);
void	rotate_rev_a(t_list **stack_a);
void	rotate_rev_b(t_list **stack_b);
void	rotate_rev_rotate(t_list **stack_a, t_list **stack_b);
int		check_sort(t_list *stack);
int		find_index(t_list *stack, int nbr);
int		find_min(t_list *stack);
int		find_max(t_list *stack);
void	sort(t_list **a, t_list **b);
void	sort_three(t_list **stack_a);
void	sort_four(t_list **a, t_list **b);
void	sort_five(t_list **a, t_list **b);
void	radix_sort(t_list **a, t_list **b, int i, int j);
int		find_max_bits(t_list **stack);