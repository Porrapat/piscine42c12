/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:22:59 by porrapat          #+#    #+#             */
/*   Updated: 2021/12/17 14:23:55 by porrapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#include "ex10/ft_list.h"

void	print_element(void *element)
{
	printf("element:: %d\n", *((int *)element));
}

int	compare_modulo(void *data, void *data_ref)
{
	return (*((int *)data) % *((int *)data_ref));
}

int	main(void)
{
	int		*index;
	int		*modulo;
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
	modulo = malloc(sizeof(int));
	*modulo = 2;
	ft_list_foreach_if(list, &print_element, modulo, &compare_modulo);
}
