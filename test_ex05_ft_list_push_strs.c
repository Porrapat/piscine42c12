/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaceres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 15:00:46 by ecaceres          #+#    #+#             */
/*   Updated: 2019/08/22 15:00:46 by ecaceres         ###   ########.fr       */
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
