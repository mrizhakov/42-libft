/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_missing f.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrizakov <mrizakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:02:54 by mrizakov          #+#    #+#             */
/*   Updated: 2022/12/13 16:43:07 by mrizakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

void			*ft_memchr(const void *s, int c, size_t n);


//char			*ft_substr(char const *s, unsigned int start, size_t len);
//char			*ft_strdup(const char *s);
//char 			*ft_strnstr(const char	*big, const char *little, size_t len);
//size_t 			ft_strlcpy(char *dst, const char *src, size_t size);

// ft_substr.c ft_strdup.c ft_strnstr.c ft_memchr.c

//functions not done
/*
//char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

# ft_substr.c ft_strdup.c ft_strnstr.c ft_strlcpy.c

# ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
# ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \





//ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
*/





int				ft_atoi(const char *str);







#endif