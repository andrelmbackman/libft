/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:16:24 by abackman          #+#    #+#             */
/*   Updated: 2021/11/03 16:10:35 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
void	ft_putchar(char c);
void	ft_putstr(char const *str);
void	ft_putnbr(int n);
void	*ft_memset(void *ptr, int x, size_t len);
void	ft_bzero(void *str, size_t len);
void	*ft_memcpy(void *des, void *src, size_t len);
int		ft_strlen(char const *str);
char	*ft_strdup(char *str);
char	*ft_strcpy(char *des, const char *src);
char	*ft_strncpy(char *des, const char *src, size_t len);
#endif

