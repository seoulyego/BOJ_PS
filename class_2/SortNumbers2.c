/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SortNumbers2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 14:17:23 by yeongo            #+#    #+#             */
/*   Updated: 2022/05/21 14:21:44 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	int_compare(const void *a, const void *b)
{
	int	num1 = *(int *)a;
	int	num2 = *(int *)b;

	return (num1 - num2);
}

int	main(void)
{
	int	N;
	int	arr[1000000];

	scanf("%d\n", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
		getchar();
	}
	qsort(arr, N, sizeof(int), int_compare);
	for (int i = 0; i < N; i++)
		printf("%d\n", arr[i]);
	return (0);
}
