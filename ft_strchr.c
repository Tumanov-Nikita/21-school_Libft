/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 19:16:03 by mhunter           #+#    #+#             */
/*   Updated: 2021/11/06 13:25:14 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char	*out;

	out = (char *)str;
	while (*out != '\0')
	{
		if (*out == (char)ch)
			return (out);
		out++;
	}
	if (*out == (char)ch)
		return (out);
	return (NULL);
}
