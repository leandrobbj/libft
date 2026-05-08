/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 23:40:13 by lbraga            #+#    #+#             */
/*   Updated: 2026/05/08 11:02:08 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*swp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		swp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = swp;
	}
}
