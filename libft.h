/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:16:24 by abackman          #+#    #+#             */
/*   Updated: 2021/11/17 16:46:37 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr(int n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *str, size_t len);
void	*ft_memcpy(void *des, const void *src, size_t len);
void	*ft_memccpy(void *des, const void *src, int c, size_t len);
void	*ft_memmove(void *des, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
void	ft_strclr(char *s);
void	ft_strdel(char **as);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(const char *s, char (*f)(char));
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char)); 
size_t	ft_strlen(char const *str);
char	*ft_strcat(char *des, const char *src);
char	*ft_strncat(char *des, const char *src, size_t n);
size_t	ft_strlcat(char *des, const char  *src, size_t size);
char	*ft_strdup(char *str);
char	*ft_strcpy(char *des, const char *src);
char	*ft_strncpy(char *des, const char *src, size_t len);
char	*ft_strnew(size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strsub(const char *s, unsigned int start, size_t len);
char	**ft_strsplit(const char *s, char c);
int		ft_strequ(const char *s1, const char *s2);
int		ft_strnequ(const char *s1, const char *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t len);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_atoi(const char *nptr);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

#endif
