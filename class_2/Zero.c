/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zero.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:10:28 by yeongo            #+#    #+#             */
/*   Updated: 2022/05/26 19:17:16 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define IN_VALID 0

void	push(int *stack, int max_index, int value)
{
	int	index = 0;

	while (stack[index] != IN_VALID && index + 1 < max_index)
		index++;
	stack[index] = value;
}

void	pop(int *stack, int max_index)
{
	int	index = 0;

	while (stack[index] != IN_VALID && index + 1 < max_index)
		index++;
	if (index != 0)
		index--;
	stack[index] = IN_VALID;
}

int	main(void)
{
	int	N;
	int	num;
	int	stack[1000000] = {0, };
	int	sum = 0;

	scanf("%d", &N);
	getchar();
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num);
		getchar();
		if (num != 0)
			push(stack, N, num);
		else
			pop(stack, N);
	}
	for (int i = 0; stack[i] != IN_VALID && i + 1 < 1000000; i++)
		sum += stack[i];
	printf("sum : %d\n", sum);
	return (0);
}
