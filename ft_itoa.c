/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 23:21:11 by aminoru-          #+#    #+#             */
/*   Updated: 2022/04/25 15:08:00 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_abs(int n)
{
	if (n > 0)
		return (n);
	return (-n);
}

size_t	ft_sizeint(int n)
{
	size_t	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	size_t	size;
	long	t_num;
	char	*str;

	t_num = n;
	t_num = ft_abs(t_num);
	size = ft_sizeint(n);
	str = malloc((size + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	str[size--] = '\0';
	while (t_num > 0)
	{
		str[size--] = t_num % 10 + '0';
		t_num /= 10;
	}
	if (size == 0 && str[1] == '\0')
		str[size] = '0';
	else if (size == 0 && str[1] != '\0')
		str[size] = '-';
	return (str);
}
