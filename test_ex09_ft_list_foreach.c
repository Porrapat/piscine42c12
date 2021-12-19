/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaceres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 17:38:24 by ecaceres          #+#    #+#             */
/*   Updated: 2019/08/22 17:38:24 by ecaceres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ex09/ft_list.h"

void	print_element(void *element)
{
	printf("element:: %d\n", *((int *)element));
}

int		main(void)
{
	int		*index;
	int		*malloced_index;
	t_list	*list;

	index = malloc(sizeof(int));
	*index = 0;
	list = ft_create_elem(index);
	while ((*index += 1) < 10)
	{
		malloced_index = malloc(sizeof(int));
		*malloced_index = *index;
		ft_list_push_back(&list, (void *)malloced_index);
	}
	ft_list_foreach(list, &print_element);
}
