/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrizakov <mrizakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:02:54 by mrizakov          #+#    #+#             */
/*   Updated: 2022/12/11 20:21:33 by mrizakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int				ft_atoi(char *str);

int				ft_strlen(char *str);

void			*ft_bzero(void *s, size_t n);

int				ft_isalnum(int c);

int				ft_isalpha(int c);

int				ft_isdigit(int c);

void			*ft_memset(void *s, int c, size_t n);

char			*ft_strchr(const char *s, int c);

unsigned int	ft_strlcat(char *dest, char *str, unsigned int size);

int				ft_strncmp(char *s1, char *s2, unsigned int n);

char			*ft_strrchr(const char *s, int c);

int				ft_tolower(int c);

int				ft_toupper(int c);

int				ft_isascii(int c);

int				ft_isprint(int c);

size_t 			ft_strlcpy(char *dst, const char *src, size_t size);

void			*ft_memchr(const void *s, int c, size_t n);

char 			*ft_strnstr(const char	*big, const char *little, size_t len);

void 			*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);

void 			*ft_memmove(void *dest, const void *src, size_t n);

int 			ft_memcmp(const void *s1, const void *s2, size_t n);

char			*ft_strdup(const char *s);

void			*ft_calloc(size_t nelem, size_t elsize);

char			*ft_substr(char const *s, unsigned int start, size_t len);


#endif
