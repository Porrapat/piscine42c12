/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:22:59 by porrapat          #+#    #+#             */
/*   Updated: 2021/12/17 14:23:55 by porrapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ex05/ft_list.h"

int		main(int argc, char **argv)
{
	int		index;
	t_list	*current;

	index = 0;
	current = ft_list_push_strs(argc, argv);
	while (current != 0)
	{
		printf("list[%d] = $%s$\n", index++, (char *)current->data);
		current = current->next;
	}
}
