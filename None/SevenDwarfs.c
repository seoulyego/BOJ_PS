/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SevenDwarfs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:37:49 by yeongo            #+#    #+#             */
/*   Updated: 2022/05/17 19:28:16 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	Dwarfs[9];
	int	total_height = 0;

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &Dwarfs[i]);
		getchar();
		total_height += Dwarfs[i];
	}
	for (int i = 9; i > 0; i--)
	{
		for (int j = 1; j < 9; j++)
		{
			if (Dwarfs[j - 1] > Dwarfs[j])
				ft_swap(&Dwarfs[j - 1], &Dwarfs[j]);
		}
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (total_height - (Dwarfs[i] + Dwarfs[j]) == 100)
			{
				for (int k = 0; k < 9; k++)
				{
					if (!(k == i || k == j))
						printf("%d\n", Dwarfs[k]);
				}
				return (0);
			}
		}
	}
	return (0);
}
