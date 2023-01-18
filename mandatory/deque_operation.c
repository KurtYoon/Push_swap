/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_operation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyun <cyun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 00:20:14 by cyun              #+#    #+#             */
/*   Updated: 2023/01/19 00:36:25 by cyun             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	deque_swap_ab(t_deque *deque)
{
	t_node	*a;
	t_node	*b;

	a = deque_pop_top(deque);
	b = deque_pop_top(deque);
	deque_add_top(deque, a);
	deque_add_top(deque, b);
	ft_printf("s%c\n", deque->name);
}

void	deque_push_ab(t_deque *x, t_deque *y)
{
	t_node	*p;

	p = deque_pop_top(y);
	if (p == NULL)
		return ;
	deque_add_top(x, p);
	ft_printf("p%c\n", x->name);
}

void	deque_rotate_ab(t_deque *x)
{
	t_node	*p;

	p = deque_pop_top(x);
	if (p == NULL)
	{
		ft_printf("Empty deque\n");
		exit(0);
	}
	deque_add_bottom(x, p);
	ft_printf("r%c\n", x->name);
}

void	deque_rrotate_ab(t_deque *x)
{
	t_node	*p;

	p = deque_pop_bottom(x);
	if (p == NULL)
	{
		ft_printf("Empty deque\n");
		exit(0);
	}
	deque_add_top(x, p);
	ft_printf("rr%c\n", x->name);
}
