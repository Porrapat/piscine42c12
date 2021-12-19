/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaceres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 16:30:36 by ecaceres          #+#    #+#             */
/*   Updated: 2019/08/22 16:30:36 by ecaceres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "ex07/ft_list.h"

int		main(void)
{
	int		index;
	int		*malloced_index;
	t_list	*list;

	index = 1;
	list = ft_create_elem(0);
	while (index < 10)
	{
		malloced_index = malloc(sizeof(int));
		*malloced_index = index;
		ft_list_push_back(&list, (void *)malloced_index);
		index++;
	}
	index = 1;
	while (index < 10)
	{
		printf("data at index %d is %d\n", index,
			*((int *)ft_list_at(list, index)->data));
		index++;
	}
}
