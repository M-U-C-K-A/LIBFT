/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelacou <hdelacou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:37:59 by hdelacou          #+#    #+#             */
/*   Updated: 2024/10/16 19:38:02 by hdelacou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fill_join(char *dst, char const *s2, unsigned int i, char *tmp)
{
	size_t			len;
	unsigned int	j;

	len = ft_strlen(tmp);
	j = 0;
	while (j < len)
	{
		dst[i] = tmp[j];
		i++;
		j++;
	}
	if (tmp == s2)
		return (dst);
	return (fill_join(dst, s2, i, (char *)s2));
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t			size;
	char			*join;
	unsigned int	i;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	join = ft_memalloc(size + 1);
	if (!join)
		return (NULL);
	i = 0;
	fill_join(join, s2, i, (char *)s1);
	return (join);
}
