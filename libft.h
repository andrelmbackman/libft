/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:16:24 by abackman          #+#    #+#             */
/*   Updated: 2021/11/05 11:16:17 by abackman         ###   ########.fr       */
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
void	*ft_memset(void *ptr, int x, size_t len);
void	ft_bzero(void *str, size_t len);
void	*ft_memcpy(void *des, const void *src, size_t len);
void	*ft_memccpy(void *des, const void *src, int c, size_t n);
void	*ft_memmove(void *des, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strlen(char const *str);
char	*ft_strcat(char *des, const char *src);
char	*ft_strncat(char *des, const char *src, size_t n);
size_t	ft_strlcat(char *des, const char  *src, size_t size);
char	*ft_strdup(char *str);
char	*ft_strcpy(char *des, const char *src);
char	*ft_strncpy(char *des, const char *src, size_t len);
#endif

