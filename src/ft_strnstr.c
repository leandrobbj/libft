/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:43:48 by lbraga            #+#    #+#             */
/*   Updated: 2026/05/05 20:07:41 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;

	if (!little[0])
		return ((char *)big);
	b = 0;
	while (big[b] && b < len)
	{
		l = 0;
		while (big[b + l] && little[l] && b + l < len
			&& little[l] == big[b + l])
			l++;
		if (little[l] == '\0')
			return ((char *)big + b);
		b++;
	}
	return (NULL);
}
