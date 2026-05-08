/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:40:07 by lbraga            #+#    #+#             */
/*   Updated: 2026/05/08 11:03:39 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isset(char c, const char *set)
{
	while (*set && c != *set)
		set++;
	if (c == *set)
		return (1);
	else
		return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && isset(s1[i], set))
		i++;
	while (j > i && isset(s1[j - 1], set))
		j--;
	return (ft_substr(s1, i, j - i));
}
