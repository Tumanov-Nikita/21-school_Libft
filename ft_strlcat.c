/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 18:41:37 by mhunter           #+#    #+#             */
/*   Updated: 2021/11/02 19:50:45 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destLen;
	size_t	srcLen;

	destLen = ft_strlen(dest);
	srcLen = ft_strlen((char *)src);
	if (size != 0)
	{
		if (size < destLen)
		{
			return (srcLen + size);
		}
		else
		{
			srcLen = ft_strlcpy(dest + destLen, src, size - destLen);
			return (srcLen + destLen);
		}
	}
	return (srcLen);
}
