/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfts.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycoutena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 15:25:31 by ycoutena          #+#    #+#             */
/*   Updated: 2018/02/12 08:53:26 by ycoutena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTS_H
#define LIBFTS_H
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void	ft_bzero(void *s, size_t n);
void	ft_cat(int fd);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);
void	*ft_memcpy(void *dst, const void *s, size_t n);
void	*ft_memset(void *b, int c, size_t n);
void	ft_putendl(const char *s);
int		ft_puts(const char *s);
void	ft_putstr(const char *s);
void	ft_putstr_fd(const char *s);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strchr(const char *s1, char s2);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s1);
char	*ft_strrchr(const char *s1, char s2);
int		ft_tolower(int c);
int		ft_toupper(int c);
#endif
