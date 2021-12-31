/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:22:59 by porrapat          #+#    #+#             */
/*   Updated: 2021/12/17 14:23:55 by porrapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	if (begin_list == NULL)
		return (0);
	if (begin_list->next == 0)
		return (1);
	return (1 + ft_list_size(begin_list->next));
}
