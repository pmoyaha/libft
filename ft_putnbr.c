/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoyaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:32:41 by pmoyaha           #+#    #+#             */
/*   Updated: 2019/06/07 14:27:26 by pmoyaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


#include "libft.h"

void    ft_putnbr(int n)
{
    if (n == -2147483648)
        ft_putstr("-2147483648");
    else if (n < 0)
    {
        ft_putchar('-');
        ft_putnbr(-n);
    }
    else if (n >= 10)
    {
        ft_putnbr(n / 10);
        ft_putchar(n % 10 + '0');
    }
    else
        ft_putchar(n + '0');
}
