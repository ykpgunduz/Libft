/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagunduz <yagunduz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 13:44:41 by yagunduz          #+#    #+#             */
/*   Updated: 2025/06/28 14:38:09 by yagunduz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
	const char *last = 0;
	while(*s)
{
		if(*s == (char)c)
	last = s;
	s++;
}
	if((char)c == '\0')
	return(char *)s;
	return(char *)last;
}
