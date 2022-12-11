/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrizakov <mrizakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:59:24 by mrizakov          #+#    #+#             */
/*   Updated: 2022/12/08 18:01:14 by mrizakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strchr(const char *s, int c)
{
while ((*s != '\0') && (*s != c))
		s++;
	if (*s == c)
		return ((char *)s);
		
	return ((char *)NULL); 
}

/*
int	main(void)
{
	int c;
	
	
	char str[9] = "Hell\0o";
	c = '\0';
	printf("found %s ", ft_strchr(str, c));
	
	
	return (0);
}
*/