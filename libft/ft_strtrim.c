/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrizakov <mrizakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:56:29 by mrizakov          #+#    #+#             */
/*   Updated: 2022/12/13 16:15:42 by mrizakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
//#include"libft.h"

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
char *ft_strtrim(char const *s1, char const *set)
{
	char			*new_str;
	unsigned int	s1_i;
	unsigned int	s1_len;
	unsigned int	set_len;
	unsigned int	set_i;
	unsigned int	new_str_i;

	s1_len = ft_strlen((char *)s1);
	set_len = ft_strlen((char *)set);
	if (!(new_str = malloc (s1_len + 1)))
		return (void *)NULL;

	s1_i = 0;
	set_i = 0;
	new_str_i = 0;
	while (s1_i != set_len)
	{
		//new_str[i] = s1[i];
		while (set[set_i] != '\0')
		{
			if (s1[s1_i] != set[set_i])
			{
				new_str[new_str_i] = s1[s1_i];	
				new_str_i++;
			}
			set_i++;
		}
		s1_i++;
	}
	while (s1_i < s1_len - set_len)
	{
		new_str[new_str_i] = s1[s1_i];
		new_str_i++;
		s1_i++;
	}
	while (s1_i != '\0')
	{
		//new_str[i] = s1[i];
		while (set[set_i] != '\0')
		{
			if (s1[s1_i] != set[set_i])
			{
				new_str[new_str_i] = s1[s1_i];	
				new_str_i++;
			}
			set_i++;
		}
		s1_i++;
	}
	new_str[new_str_i] = '\0';
	return (new_str);	
}
	
int main(void)
{
	char	s1[] = "qqlorqq";
	char	set[] = "qq";

	printf("%s", ft_strtrim(s1, set));
	return (0);
}
