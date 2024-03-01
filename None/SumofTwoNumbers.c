/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SumofTwoNumbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:09:25 by yeongo            #+#    #+#             */
/*   Updated: 2022/05/21 14:10:06 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
	int num1 = *(int *)a;
	int num2 = *(int *)b;

	if (num1 > num2)
		return (1);
	else if (num1 == num2)
		return (0);
	else
		return (-1);
}

int	main(void)
{
	int	N, X;
	int	arr[100000];
	int	count = 0;

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
		getchar();
	}
	scanf("%d", &X);
	qsort(arr, N, sizeof(int), compare);
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (arr[i] + arr[j] >= X)
			{
				if (arr[i] + arr[j] == X)
					count++;
				break ;
			}
		}
	}
	printf("%d\n", count);
	return (0);
}
