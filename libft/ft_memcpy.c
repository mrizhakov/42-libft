/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrizakov <mrizakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:56:29 by mrizakov          #+#    #+#             */
/*   Updated: 2022/12/10 17:56:05 by mrizakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	unsigned int	new_n;
	char			*char_dest;
	char			*char_src;
	unsigned int 	i;

	char_dest = (char *)dest;
	char_src =  (char *)src;
	i = 0;
	new_n = (unsigned int)n;

	if (dest == NULL)
		return NULL;
	
	while (i < new_n)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (char_dest);
}
/*
int	main(void)
{
	void *restrict dest = "aaaaaaaaaaaa";
	void *restrict src = "bbbbb";
	size_t n;
	void *return_value;

	
	n = 2;

	return_value = ft_memcpy(dest, src, n);
	return (0);
}
*/