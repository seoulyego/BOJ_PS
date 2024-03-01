/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Palindrome.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:47:38 by yeongo            #+#    #+#             */
/*   Updated: 2022/05/14 14:04:48 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strrev(char *str)
{
	char	*rev;
	int		size;
	int		index;

	size = strlen(str);
	rev = malloc(sizeof(char) * (size + 1));
	if (rev == NULL)
		return (NULL);
	rev[size] = '\0';
	index = 0;
	while (index < size)
	{
		rev[index] = str[size - 1 - index];
		index++;
	}
	return (rev);
}

int	main(void)
{
	char	num[5];
	char	*rev_num;

	while (42)
	{
		scanf("%s", num);
		getchar();
		if (strcmp(num, "0") == 0)
			return(0) ;
		rev_num = ft_strrev(num);
		if (strcmp(num, rev_num) == 0)
			printf("yes\n");
		else
			printf("no\n");
		free(rev_num);
	}
	return (0);
}
