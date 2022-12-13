/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrizakov <mrizakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:45:43 by mrizakov          #+#    #+#             */
/*   Updated: 2022/12/12 20:45:13 by mrizakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"


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

int 			ft_memcmp(const void *s1, const void *s2, size_t n)
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
*/

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	
	unsigned int	new_len;
	unsigned int	big_len;
	unsigned int	little_len;
	char 			*big_new;
	char 			*little_new;
	
	big_len = ft_strlen(big);
	little_len = ft_strlen(little);
	big_new = (char *)big;
	little_new = (char *)little;
	new_len = (unsigned int)len;
		
	if (!little_len)
	return  ((char *)big_new);
	
	while ((new_len >= ft_strlen(little_new)))
	{
		new_len--;
		if (!ft_memcmp((const void *)big_new, (const void *)little_new, little_len))
		return (char*)big_new;
		big_new++;
	}

/*	
	while (big_i <= (int)ft_strlen(big_new) - (int)ft_strlen(little_new)  && new_len != 0) 
	{
		

		while (little_i <= (int)ft_strlen(little_new))
		{
			
			if (big[big_i + little_i] != little_new[little_i])
			break;
			

			if (little_i == (int)ft_strlen((char *)little))
			{
			
			return (&big_new[big_i]);
			}
			
			little_i++;
		}
		big_i++;
		new_len--;
	}
*/
	return (char *)NULL;
	
}

/*
int main(void)
{
	const char big[] = "lorem ipsum dolor sit amet";
	const char little[] = "lorem";
	unsigned int n;
	char *result;
	
	n = 15;
	result = ft_strnstr(big, little, n);
	printf("%s \n", result);
	printf("Length of little is %d", ft_strlen((char *)little));

	return (0);
}
*/