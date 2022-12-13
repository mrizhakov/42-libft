/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrizakov <mrizakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:56:29 by mrizakov          #+#    #+#             */
/*   Updated: 2022/12/13 16:57:53 by mrizakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*new;
	unsigned int 		i;
	unsigned int 		new_size;
	//unsigned char 		*new_str;
	unsigned char 		c_new;
	
	new = (unsigned char *)s;
	new_size = (unsigned int)n;
	i = 0;
	c_new = (unsigned char)c;
	/*
	if (c_new == 0)
	return	((void *)NULL);
	*/

while (n-- != 0) {
        	if ((unsigned char)c == *new++) {
			return (void *)(new - 1);
		}
	}
	return NULL;
/*
	if (new_size == 0)
	return	((void *)NULL);
	
	while (i != new_size - 1)
	{
		if (new[i] == c_new)
		{
			new_str = (unsigned char *)new + i;
			return (new_str);
		}
		i++;
	}
	return ((void *)NULL);
	*/
}

/*
int	main(void)
{
	
	//void *s;
	size_t n;
	char s[] = {0, 1, 2 ,3 ,4 ,5};
	char c;
	char *result;
	//char *result1;

	n = 0;	
	//s =  str;
	c = 0;
	result = ft_memchr(s, c, n);
	//result1 = ft_memchr(s, c, n);
	printf("%s \n", result);
	//printf("%s \n", result1);
	
	
	//int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	//printf("%s", (char *)ft_memchr(tab, -1, 7));
	return (0);
}
*/