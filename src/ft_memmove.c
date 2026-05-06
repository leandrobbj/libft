/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:26:19 by lbraga            #+#    #+#             */
/*   Updated: 2026/05/05 20:13:33 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (dest == src)
		return (dest);
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (d < s)
		ft_memcpy(dest, src, n);
	else
	{
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}
