/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyun <cyun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:52:51 by cyun              #+#    #+#             */
/*   Updated: 2023/01/14 15:53:34 by cyun             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
