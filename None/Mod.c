/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mod.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:02:03 by yeongo            #+#    #+#             */
/*   Updated: 2022/05/17 17:04:36 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	A, B, C;

	scanf("%d %d %d", &A, &B, &C);
	getchar();
	printf("%d\n", (A + B) % C);
	printf("%d\n", ((A % C) + (B % C)) % C);
	printf("%d\n", (A * B) % C);
	printf("%d\n", ((A % C) * (B % C)) % C);
	return (0);
}
