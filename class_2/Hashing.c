/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hashing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:09:01 by yeongo            #+#    #+#             */
/*   Updated: 2022/05/14 21:53:19 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define MOD_NUM 1234567891
#define R_NUM 31

typedef unsigned long long	ull;

ull	hash_func(int *arr, int n)
{
	ull	result = 0;
    ull r_num = 1;
	int	idx_arr = 0;

	while (idx_arr < n)
	{
		result = (result + (arr[idx_arr] * r_num)) % MOD_NUM;
        r_num = (r_num * R_NUM) % MOD_NUM;
		idx_arr++;
	}
	return (result);
}

int	main(void)
{
	int		alpha_arr[50] = {0, };
	int		index = 0;
	int		n;
	char	c;

	scanf("%d\n", &n);
	while (index < n)
	{
		scanf("%c", &c);
		alpha_arr[index] = c - 96;
		index++;
	}
	printf("%llu\n" , hash_func(alpha_arr, n));
	return (0);
}
