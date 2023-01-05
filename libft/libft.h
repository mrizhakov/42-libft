/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrizakov <mrizakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:02:54 by mrizakov          #+#    #+#             */
/*   Updated: 2023/01/05 14:08:01 by mrizakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
size_t			ft_strlen(const char *str);
void			*ft_memset(void *s, int c, size_t n);
void			ft_bzero(void *s, size_t n);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
int 			ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
//void			*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
void 			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *s, int c, size_t n);
unsigned int	ft_strlcat(char *dest, char *str, unsigned int size);
void			*ft_calloc(size_t nelem, size_t elsize);
char 			*ft_strjoin(char const *s1, char const *s2);
int				ft_atoi(const char *str);
void			*ft_memchr(const void *s, int c, size_t n);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			**ft_split(char const *s, char c);
char			*ft_strdup(const char *s);
char 			*ft_strtrim(char const *s1, char const *set);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
char			*ft_strnstr(const char	*big, const char *little, size_t len);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));










#endif