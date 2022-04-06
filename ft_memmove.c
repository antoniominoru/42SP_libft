/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 20:07:25 by aminoru-          #+#    #+#             */
/*   Updated: 2022/04/06 21:32:32 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t num)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)destination;
	s2 = (unsigned char *)source;
	if (!destination && !source)
		return (NULL);
	if (source <= destination)
		while (num--)
			s1[num] = s2[num];
	else
		ft_memcpy(destination, source, num);
	return (destination);
}
