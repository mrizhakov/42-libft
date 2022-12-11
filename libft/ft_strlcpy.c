/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrizakov <mrizakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:45:43 by mrizakov          #+#    #+#             */
/*   Updated: 2022/12/09 19:39:28 by mrizakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<unistd.h>

/*
int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}
*/

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	int new_size;
	int i;
	int src_length;

	new_size = (int)size;
	i = 0;
	src_length = ft_strlen((char *)src);
	if (src[i] == '\0' && new_size != 0)
	{
	dst[i] = '\0';
	return ((size_t)src_length);
	}
	if (src[src_length] != '\0' || new_size == 0 || src_length == 0)
	{
	return ((size_t)src_length);
	}
	while (i != new_size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return ((size_t)src_length);
}

/*
int main(void)
{
	char dst[] = "rrrrrr\0\0\0\0\0\0\0\0\0";
	char src[] = "lorem ipsum";
	unsigned int size = 3;
	int result;
	
	result = ft_strlcpy(dst, src, size);
	printf("%d \n", result); 

	printf("%s \n", dst);
	printf("%s \n", src);

	return (result);
}
*/