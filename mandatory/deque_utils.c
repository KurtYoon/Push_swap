/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyun <cyun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 00:43:07 by cyun              #+#    #+#             */
/*   Updated: 2023/01/19 00:36:31 by cyun             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	init_arr(int **arr, int **dup_check, t_deque *a)
{
	t_node	*p;
	int		i;

	*arr = malloc(sizeof(int) * a->size);
	*dup_check = malloc(sizeof(int) * a->size);
	if (arr == NULL || dup_check == NULL)
		exit(1);
	p = a->top;
	i = 0;
	while (i < a->size)
	{
		(*arr)[i] = p->data;
		(*dup_check)[i] = 0;
		p = p->next;
		i++;
	}
}

void	init_deque(t_deque *a, t_deque *b)
{
	a->top = NULL;
	a->bottom = NULL;
	b->top = NULL;
	b->bottom = NULL;
	a->size = 0;
	b->size = 0;
	a->name = 'a';
	b->name = 'b';
}

int	deque_is_sorted(t_deque *a, t_deque *b)
{
	t_node	*p;
	int		i;

	if (b->size)
		return (0);
	p = a->top;
	i = 0;
	while (i < a->size - 1)
	{
		if (p->data > p->next->data)
			return (0);
		i++;
		p = p->next;
	}
	return (1);
}
