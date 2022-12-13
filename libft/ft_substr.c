/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrizakov <mrizakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:56:29 by mrizakov          #+#    #+#             */
/*   Updated: 2022/12/12 18:41:39 by mrizakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
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
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;
	unsigned int	len_new;
	unsigned int	str_len;
	
	i = 0;
	str_len = ft_strlen((char *)s);
	len_new = (unsigned int)len;
	if (!(substr = malloc (len_new + 1)))
		return (void *)NULL;
	if ((start + (unsigned int)len > str_len || start > str_len)) 
		return (substr);
	while (i != (unsigned int)len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
	
/*
int main(void)
{
	char	str[] = "lorem ipsum dolor sit amet";
	printf("%s", ft_substr(str, 400, 20));
	
	return (0);
}
*/
