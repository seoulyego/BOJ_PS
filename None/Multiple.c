/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Multiple.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:08:53 by yeongo            #+#    #+#             */
/*   Updated: 2022/05/17 17:16:43 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	N, M;
	int	Mul_sub1, Mul_sub2, Mul_sub3;

	scanf("%d\n%d", &N, &M);
	getchar();
	Mul_sub1 = N * (M % 10);
	Mul_sub2 = N * ((M / 10) % 10);
	Mul_sub3 = N * (M / 100);
	printf("%d\n", Mul_sub1);
	printf("%d\n", Mul_sub2);
	printf("%d\n", Mul_sub3);
	printf("%d\n", Mul_sub1 + Mul_sub2 * 10 + Mul_sub3 * 100);
	return (0);
}
