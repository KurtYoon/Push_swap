/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyun <cyun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 00:10:42 by cyun              #+#    #+#             */
/*   Updated: 2023/01/19 00:33:46 by cyun             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	deque_add_top(t_deque *deque, t_node *new_node)
{
	t_node	*node;

	node = deque->top;
	deque->top = new_node;
	new_node->next = node;
	deque->size++;
	if (node == NULL)
	{
		deque->bottom = new_node;
		new_node->prev = new_node;
		new_node->next = new_node;
		return ;
	}
	new_node->prev = deque->bottom;
	node->prev = new_node;
	deque->bottom->next = deque->top;
}

void	deque_add_bottom(t_deque *deque, t_node *new_node)
{
	t_node	*node;

	node = deque->bottom;
	deque->bottom = new_node;
	new_node->prev = node;
	deque->size++;
	if (node == NULL)
	{
		deque->top = new_node;
		new_node->prev = new_node;
		new_node->next = new_node;
		return ;
	}
	new_node->next = deque->top;
	node->next = new_node;
	deque->top->prev = deque->bottom;
}

t_node	*deque_pop_top(t_deque *deque)
{
	t_node	*p;
	t_node	*q;

	p = deque->top;
	if (p == NULL)
		return (NULL);
	q = p->next;
	p->prev = NULL;
	p->next = NULL;
	deque->top = q;
	deque->size--;
	if (q == NULL || p == q)
	{
		deque->top = NULL;
		deque->bottom = NULL;
		return (p);
	}
	q->prev = deque->bottom;
	deque->bottom->next = q;
	return (p);
}

t_node	*deque_pop_bottom(t_deque *deque)
{
	t_node	*p;
	t_node	*q;

	p = deque->bottom;
	if (p == NULL)
		return (NULL);
	q = p->prev;
	p->prev = NULL;
	p->next = NULL;
	deque->bottom = q;
	deque->size--;
	if (q == NULL || p == q)
	{
		deque->top = NULL;
		deque->bottom = NULL;
		return (p);
	}
	q->next = deque->top;
	deque->top->prev = q;
	return (p);
}
