/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelacou <hdelacou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:40:04 by hdelacou          #+#    #+#             */
/*   Updated: 2024/10/17 16:34:41 by hdelacou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	i = 0;
	tmp1 = (unsigned char *)dst;
	tmp2 = (unsigned char *)src;
	if (tmp1 > tmp2)
	{
		while (i < len)
		{
			tmp1[len - 1] = tmp2[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			tmp1[i] = tmp2[i];
			i++;
		}
	}
	return (dst);
}
