/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BlackJack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:33:14 by yeongo            #+#    #+#             */
/*   Updated: 2022/05/11 19:57:55 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n, m;
	int	cards[100];
	int	sum;
	int	solution;

	scanf("%d %d\n", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%d", &cards[i]);
	solution = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				sum = cards[i] + cards[j] + cards[k];
				if (sum <= m)
					solution = (solution < sum ? sum : solution);
			}
		}
	}
	printf("%d\n", solution);
	return (0);
}
