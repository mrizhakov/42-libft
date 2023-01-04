/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrizakov <mrizakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:45:43 by mrizakov          #+#    #+#             */
/*   Updated: 2023/01/04 18:28:31 by mrizakov         ###   ########.fr       */
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
	size_t i;
	
	//if (!dst || !src)
	//	return (0);
	
	i = 0;
	if (size > 0)
		{
			while (src[i] && i < (size - 1))
				{
					dst[i] = src[i];
					i++;
				}
			dst[i] = '\0';
		}
	while (src[i])
		i++;
	return (i);
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