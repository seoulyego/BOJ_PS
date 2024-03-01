/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SortWords.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 20:17:04 by yeongo            #+#    #+#             */
/*   Updated: 2022/05/14 13:41:26 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRS 20000
#define MAX_STR 50

int	compare(const void *a, const void *b)
{
	int	a_len = strlen(a);
	int	b_len = strlen(b);

	if (a_len > b_len)
		return (1);
	else if (a_len < b_len)
		return (-1);
	else
		return (strcmp(a, b));
}

int	main(void)
{
	int		size;
	char	strs[MAX_STRS + 1][MAX_STR + 1];

	scanf("%d\n", &size);
	for (int i = 0; i < size; i++)
	{
		scanf("%s", strs[i]);
		getchar();
	}
	qsort(strs, size, 51 * sizeof(char), compare);
	printf("%s\n", strs[0]);
	for (int i = 1; i < size; i++)
	{
		if (strcmp(strs[i - 1], strs[i]) != 0)
			printf("%s\n", strs[i]);
	}
	return (0);
}
