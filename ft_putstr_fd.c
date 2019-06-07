/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoyaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 09:26:57 by pmoyaha           #+#    #+#             */
/*   Updated: 2019/06/07 10:52:22 by pmoyaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s,int fd)
{
	if(!s)
	{
		return ;
	}
	while (*s != '\0')
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}
