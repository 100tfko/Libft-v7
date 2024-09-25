/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:45:27 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/10/02 15:04:35 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/*
pasa a minuscula

#include <stdio.h>

int	main(void)
{
	char	c;

	c = 'p';
	printf("%c\n", ft_tolower(c));
	printf("%c\n", tolower(c));
	return (0);
}*/
