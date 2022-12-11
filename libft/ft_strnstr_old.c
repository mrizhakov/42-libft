/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrizakov <mrizakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:45:43 by mrizakov          #+#    #+#             */
/*   Updated: 2022/12/09 21:40:46 by mrizakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>


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

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	unsigned int new_len;
	int big_i;
	int little_i;
	char *big_new;
	char *little_new;
	
	big_i = 0;
	little_i = 0;
	big_new = (char *)big;
	little_new = (char *)little;
	new_len = (unsigned int)len;
	if (ft_strlen((char *)little) == 0)
	return  ((char *)big);
	
	while (big_new[big_i] <= ft_strlen(big_new) && new_len != 0) 
	{
		while (little_new[little_i] <= ft_strlen(little_new))
		{
			if (big[big_i + little_i] != little_new[little_i])
			break;
			if (little_i == ft_strlen((char *)little))
			return (big_new + big_i);
			
			little_i++;
		}
		big_i++;
		new_len--;
	}
	return (char *)NULL;
}

int main(void)
{
	const char big[] = "Foo Bar Baz";
	const char little[] = "Bar";
	unsigned int n;
	char *result;
	
	n = 6;
	result = ft_strnstr(big, little, n);
	printf("%s \n", result);

	return (0);
}
