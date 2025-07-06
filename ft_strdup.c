/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagunduz <yagunduz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 13:45:23 by yagunduz          #+#    #+#             */
/*   Updated: 2025/07/06 18:38:20 by yagunduz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*copy;

	len = ft_strlen(s1);
	copy = (char *)malloc(len + 1);
	if (!copy)
		return (NULL);
	ft_memcpy(copy, s1, len);
	copy[len] = '\0';
	return (copy);
}
