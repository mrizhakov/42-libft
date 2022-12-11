/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrizakov <mrizakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:56:29 by mrizakov          #+#    #+#             */
/*   Updated: 2022/12/11 21:11:34 by mrizakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include"libft.h"

/*
void	*ft_bzero(void *s, size_t n)
{
	char	*new;
	int n_int;
	int i;

	i = 0;
	n_int = (int)n;
	new = (char *)s;
	while (i != n_int)
	{
		new[i] = '\0';
		i++;
	}
	return ((void *)s);
}
*/

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ptr;
	if (nelem * elsize > 2147483647)
	{
		return (NULL);
	}

	ptr = malloc (nelem * elsize);
	if (ptr == 0)
	{
		return (ptr);
	}
	ft_bzero(ptr, nelem *elsize);
	return (ptr);
}
	//s_size = ft_strlen((char *)s);
	
	//s_new = (sizeof(elsize))malloc(nelem);
	/*	

	
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
	*/
	
/*
int main(void)
{
	
	ft_calloc(5, 3);
	
	return (0);
}
*/