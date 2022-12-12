/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrizakov <mrizakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:56:29 by mrizakov          #+#    #+#             */
/*   Updated: 2022/12/12 11:58:48 by mrizakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include"libft.h"


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


char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*new_str;
	unsigned int	i;
	unsigned int	s1_len;
	unsigned int	s2_len;
	unsigned int	y;


	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	if (!(new_str = malloc (s2_len + s1_len + 1)))
		return (void *)NULL;

	i = 0;
	y = 0;
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	while (s2[y] != '\0')
	{
		new_str[i] = s2[y];
		i++;
		y++;
	}
	new_str[i] = '\0';
	return (new_str);	
}
	
/*
int main(void)
{
	char	s1[] = "lorem ipsum";
	char	s2[] = "dolor sit amet";

	printf("%s", ft_strjoin(s1, s2));
	
	return (0);
}
*/