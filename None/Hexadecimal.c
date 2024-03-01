/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hexadecimal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 02:00:52 by yeongo            #+#    #+#             */
/*   Updated: 2022/05/25 02:13:53 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	in_base(char c)
{
	const char	*base = "0123456789ABCDEF";

	for (int i = 0; base[i]; i++)
	{
		if (base[i] == c)
			return (i);
	}
	return (-1);
}

int	ft_atoi_hex(char *str)
{
	int	result = 0;

	for (int i = 0; str[i]; i++)
	{
		result *= 16;
		result += in_base(str[i]);
	}
	return (result);
}

int	main(void)
{
	char	nbr[7] = {0, };

	scanf("%s", nbr);
	getchar();
	printf("%d\n", ft_atoi_hex(nbr));
	return (0);
}
