/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelacou <hdelacou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:49:08 by hdelacou          #+#    #+#             */
/*   Updated: 2024/10/16 19:38:11 by hdelacou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	if (s1 == NULL || s2 == NULL)
		return (0);
	if (n == 0)
		return (1);
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (0);
		if (s1[i] == '\0' || s2[i] == '\0')
			break ;
		i++;
	}
	return (1);
}
