/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:20:50 by mhunter           #+#    #+#             */
/*   Updated: 2021/10/14 19:25:08 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0 & c <= 0x7F) || (c >= 00 & c <= 0177) || (c >= 0 & c <= 127))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
