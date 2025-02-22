/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzuccare <vzuccare@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:25:31 by vzuccare          #+#    #+#             */
/*   Updated: 2024/02/19 10:11:50 by vzuccare         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stddef.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <stdint.h>

int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t nmemb, size_t size);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
void			*ft_memchr( const void *s, int c, size_t n );
int				ft_memcmp( const void *s1, const void *s2, size_t n );
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *s, int c, size_t n);
char			*ft_strchr( const char *string, int searchedChar );
char			*ft_strdup(const char *s);
char			*ft_strjoin(char *s1, char *s2);
char			*ft_strjoin_free(char *s1, char *s2);
int				ft_strncmp( const char *s1, const char *s2, size_t n );
char			*ft_strnstr(const char *s1, const char *s2, size_t	len );
char			*ft_strrchr( const char *string, int searchedChar );
char			*ft_substr(char const *s, size_t start, size_t len);
int				ft_tolower(int character);
int				ft_toupper( int character );
size_t			ft_strlen(const char *s);
char			*ft_strtrim(char const *s1, char const *set);
size_t			ft_strlcat(char *dest, char *src, size_t size);
size_t			ft_strlcpy(char *dest, char *src, size_t size);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
long long int	ft_strtol(const char *str);
void			free_tab(char **tab);
size_t			absolute(ssize_t nb);
size_t			ft_tablen(char **tab);

#endif