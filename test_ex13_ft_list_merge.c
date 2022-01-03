/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:22:59 by porrapat          #+#    #+#             */
/*   Updated: 2021/12/17 14:23:55 by porrapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#include "ex13/ft_list.h"

int		main(void)
{
	int		index;
	int		*malloced_index;
	t_list	*list;
	t_list	*list2;

	index = 0;
	list = ft_create_elem(0);
	list2 = ft_create_elem(0);
	while (index < 10)
	{
		malloced_index = malloc(sizeof(int));
		*malloced_index = index;
		ft_list_push_back(&list, (void *)malloced_index);
		ft_list_push_back(&list2, (void *)malloced_index);
		index++;
	}
	ft_list_merge(&list->next, list2->next);
	index = 0;
	list = list->next;
	while (list)
	{
		printf("list[%d]: %d\n", index, *((int *)list->data));
		index++;
		list = list->next;
	}
}
