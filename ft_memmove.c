/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:29:08 by mhunter           #+#    #+#             */
/*   Updated: 2021/11/06 15:38:09 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	const char	*s;
	const char	*srcLast;
	char		*d;
	char		*dstLast;

	if (!dst || !src)
		return (NULL);
	d = dst;
	s = src;
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
	{
		srcLast = s + (n - 1);
		dstLast = d + (n - 1);
		while (n--)
			*dstLast-- = *srcLast--;
	}
	return (dst);
}
