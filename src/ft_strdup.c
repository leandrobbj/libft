/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 11:23:31 by lbraga            #+#    #+#             */
/*   Updated: 2026/05/08 11:03:08 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	dsize;

	dsize = ft_strlen(s) + 1;
	str = (char *)malloc(dsize * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, dsize);
	return (str);
}
