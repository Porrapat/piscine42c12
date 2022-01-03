/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:22:59 by porrapat          #+#    #+#             */
/*   Updated: 2021/12/17 14:23:55 by porrapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "ex07/ft_list.h"

int	main(void)
{
	int		index;
	int		*malloced_index;
	t_list	*list;

	index = 1;
	list = ft_create_elem(0);
	while (index < 10)
	{
		malloced_index = malloc(sizeof(int));
		*malloced_index = index * 100;
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
