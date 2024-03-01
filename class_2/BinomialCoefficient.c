/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BinomialCoefficient.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:33:23 by yeongo            #+#    #+#             */
/*   Updated: 2022/05/20 16:01:07 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_factorial(int start, int end)
{
	int	result = 1;

	if (end == 0)
		return (1);
	while (start <= end)
	{
		result *= start;
		start++;
	}
	return (result);
}

int	main(void)
{
	int	N, K;
	int	result;

	scanf("%d %d", &N, &K);
	if (N == K)
	{
		printf("1\n");
		return (0);
	}
	result = ft_factorial(K + 1, N) / ft_factorial(1, N - K);
	printf("%d\n", result);
	return (0);
}
