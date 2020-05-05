/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caking <caking@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 21:57:46 by caking            #+#    #+#             */
/*   Updated: 2020/05/05 18:38:52 by caking           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int i;

	if (s == 0)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
