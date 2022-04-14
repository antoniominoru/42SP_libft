/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 02:08:07 by aminoru-          #+#    #+#             */
/*   Updated: 2022/04/14 02:20:32 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*i;

	i = s;
	s = (s + ft_strlen(s));
	while (*s != *i && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}
