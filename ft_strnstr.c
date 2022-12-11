/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrizakov <mrizakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:45:43 by mrizakov          #+#    #+#             */
/*   Updated: 2022/12/11 16:27:45 by mrizakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
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


char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	
	unsigned int new_len;
	int big_i;
	int little_i;
	char *big_new;
	char *little_new;
	
	big_i = 1;
	little_i = 1;
	big_new = (char *)big;
	little_new = (char *)little;
	new_len = (unsigned int)len;
	if (ft_strlen((char *)little) == 0)
	return  ((char *)big);
	
	while (big_i <= ft_strlen(big_new) - ft_strlen(little_new)  && new_len != 0) 
	{
		/*
		printf("Big_i is: %d \n", big_i);
		printf("New_len: %d \n", new_len);
		printf("Big_new length is: %d \n", ft_strlen(big_new));
		printf("Little_new length is: %d \n", ft_strlen(little_new));
		*/

		while (little_i <= ft_strlen(little_new))
		{
			/*
			printf("Little_i is: %d \n", little_i);
			printf("Big_i is: %d \n", big_i);
			
			printf("big[big_i + little_i] is: %c \n", big[big_i + little_i]);
			printf("little_new[little_i] is: %c \n", little_new[little_i]);
			*/

			if (big[big_i + little_i] != little_new[little_i])
			break;
			/*
			printf("little_i is: %d \n", little_i);
			printf("(char *)little is: %d \n", ft_strlen((char *)little));
			*/

			if (little_i == ft_strlen((char *)little))
			{
			/*	
			printf("big_new[big_i] is: %c \n", big_new[big_i]);
			printf("Returning big_new[big_i]: %c \n", big_new[big_i]);
			*/
			return (&big_new[big_i]);
			}
			
			little_i++;
		}
		big_i++;
		new_len--;
	}
	
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