/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tscasso <tscasso@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:15:06 by tscasso           #+#    #+#             */
/*   Updated: 2023/03/13 21:03:38 by tscasso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *tofind, size_t len)
{
	size_t	tofind_len;

	tofind_len = ft_strlen(tofind);
	if (tofind_len == 0)
		return ((char *)str);
	while (len-- >= tofind_len)
	{
		if (*str == *tofind && ft_strncmp(str, tofind, tofind_len) == 0)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
