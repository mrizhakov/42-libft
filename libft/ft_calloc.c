/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrizakov <mrizakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:56:29 by mrizakov          #+#    #+#             */
/*   Updated: 2022/12/11 17:35:07 by mrizakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

void *calloc(size_t nmemb, size_t size)
{
	
	unsigned int	counter;
	unsigned char 	*s1_new;
	unsigned char 	*s2_new;

	s1_new = (unsigned char *)s1;
	s2_new = (unsigned char *)s2;

	counter = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1_new[counter] == s2_new[counter]
		&& (counter < (unsigned int)n - 1))
		counter++;
	return ((unsigned char)s1_new[counter] - (unsigned char)s2_new[counter]);
	
	return (0);
}

int main(void)
{
	char string1[] = "test\200";
	char string2[] = "test\0";
	unsigned int n;
	int result;
	
	n = 6;
	result = ft_calloc(string1, string2, n);
	printf("%d \n", result);

	printf("%s \n", string1);
	printf("%s \n", string2);
	return (result);
}