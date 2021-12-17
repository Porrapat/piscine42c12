/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaceres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 14:39:19 by ecaceres          #+#    #+#             */
/*   Updated: 2019/08/22 14:39:19 by ecaceres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ex03/ft_list.h"

int		main(void)
{
	int		index;
	int		*malloced_index;
	t_list	*list;

	list = ft_create_elem(0);
	index = 0;
	while (index < 10)
	{
		malloced_index = malloc(sizeof(int));
		*malloced_index = index;
		ft_list_push_front(&list, (void *)malloced_index);
		index++;
	}
	printf("last malloced index: %d\n", *((int *)list->data));
}
