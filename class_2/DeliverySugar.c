/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeliverySugar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 14:16:57 by yeongo            #+#    #+#             */
/*   Updated: 2022/05/14 14:44:43 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	sugar;
	int	big_bag;
	int	small_bag;
	int	tmp_carry;
	int	carry_bag;

	scanf("%d", &sugar);
	carry_bag = 5000;
	big_bag = 0;
	while (5 * big_bag <= sugar)
	{
		tmp_carry = 0;
		small_bag = 0;
		while (5 * big_bag + 3 * small_bag <= sugar)
		{
			if (5 * big_bag + 3 * small_bag == sugar)
			{
				tmp_carry = big_bag + small_bag;
				if (carry_bag >= tmp_carry)
					carry_bag = tmp_carry;
			}
			small_bag++;
		}
		big_bag++;
	}
	if (carry_bag == 5000)
		carry_bag = -1;
	printf("%d\n", carry_bag);
	return (0);
}
