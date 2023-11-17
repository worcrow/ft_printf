/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 22:38:51 by oel-asri          #+#    #+#             */
/*   Updated: 2023/11/09 04:03:41 by oel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * ft_lstlast - get the last node of the list
 * @lst: beginning of the list
 * Return: last node of the list
*/

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	if (!lst)
		return (lst);
	while (temp->next)
		temp = temp->next;
	return (temp);
}
