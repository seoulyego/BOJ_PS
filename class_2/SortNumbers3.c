/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SortNumbers3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 14:17:23 by yeongo            #+#    #+#             */
/*   Updated: 2022/05/21 14:54:41 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*
int	int_compare(const void *a, const void *b)
{
	int	num1 = *(int *)a;
	int	num2 = *(int *)b;

	return (num1 - num2);
}
*/

void ft_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	N;
	int	*arr;

	scanf("%d\n", &N);
	arr = malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
		getchar();
	}
	// mergesort(arr, N, sizeof(int), int_compare);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N - 1; j++)
		{
			if (arr[j] < arr[j + 1])
				ft_swap(&arr[j], &arr[j + 1]);
		}
		printf("%d\n", arr[N - 1 - i]);
	}
	return (0);
}
