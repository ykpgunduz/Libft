/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagunduz <yagunduz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 13:45:44 by yagunduz          #+#    #+#             */
/*   Updated: 2025/06/28 13:45:45 by yagunduz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	size_t i = 0;
	if(!s)
	return;
	while(s[i])
{
	write(fd, &s[i], 1);
	i++;
}
	write(fd, "\n", 1);
}
