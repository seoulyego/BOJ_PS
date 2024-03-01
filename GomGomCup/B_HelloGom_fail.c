/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B_HelloGom.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 21:42:33 by yeongo            #+#    #+#             */
/*   Updated: 2022/05/14 22:06:34 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#define HASH 10000000
#define MAX_LENGTH 20
#define R_NUM 23

typedef unsigned long long	ull;

int	hash_table[HASH];

ull	hash_func(char *arr, int n)
{
	ull	result = 0;
    ull r_num = 1;
	int	idx_arr = 0;

	while (idx_arr < n)
	{
		result = (result + (arr[idx_arr] * r_num)) % HASH;
        r_num = (r_num * R_NUM) % HASH;
		idx_arr++;
	}
	return (result);
}

int	main(void)
{
	int		N;
	char	id[MAX_LENGTH + 1];
	int		count;

	scanf("%d", &N);
	getchar();
	for (int i = 0; i < HASH; i++)
		hash_table[i] = 0;
	count = 0;
	for (int i = 0; i < N; i++)
	{
		scanf("%s", id);
		getchar();
		if (strcmp(id, "ENTER") == 0)
		{
			for (int j = 0; j < HASH; j++)
			{
				if (hash_table[j] != 0)
					count++;
				hash_table[j] = 0;
			}
		}
		else
			hash_table[i] = hash_func(id, strlen(id));
	}
	for (int j = 0; j < HASH; j++)
	{
		if (hash_table[j] != 0)
			count++;
	}
	printf("%d\n", count);
	return (0);
}
