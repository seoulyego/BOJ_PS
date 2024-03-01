/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_ChickenDance.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 20:21:33 by yeongo            #+#    #+#             */
/*   Updated: 2022/05/14 20:32:25 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	max_chicken;
	int	eat_chicken;
	int	coke, beer;

	scanf("%d", &max_chicken);
	getchar();
	scanf("%d %d", &coke, &beer);
	eat_chicken = (coke >> 1) + beer;
	if (max_chicken < eat_chicken)
		eat_chicken = max_chicken;
	printf("%d\n", eat_chicken);
	return (0);
}
