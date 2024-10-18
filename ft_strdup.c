/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelacou <hdelacou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:37:31 by hdelacou          #+#    #+#             */
/*   Updated: 2024/10/16 19:37:32 by hdelacou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s1)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * ft_strlen(s1));
	if (str == NULL)
		return (NULL);
	else
		str = ft_strcpy(str, s1);
	return (str);
}
