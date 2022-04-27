/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:47:01 by aminoru-          #+#    #+#             */
/*   Updated: 2022/04/27 16:14:51 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	int		total;

	total = count * size;
	if (total / count != size)
		return (NULL);
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, (total));
	return (ptr);
}
