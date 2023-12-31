/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-ruit <ide-ruit@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:48:48 by ide-ruit          #+#    #+#             */
/*   Updated: 2023/11/12 19:27:45 by ide-ruit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>


int		ft_atoi(const char* str);
void	ft_bzero(void* s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void*	ft_memchr(const void* s, int c, size_t n);
int		ft_memcmp(const void* s1, const void* s2, size_t n);
void*	ft_memcpy(void* dest, const void* src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	ft_memset(void* s, int c, size_t n);
size_t	ft_strlcat(char* dst, const char* src, size_t size);
size_t	ft_strlcpy(char* dst, const char* src, size_t size);
size_t	ft_strlen(const char* str);
int		ft_strncmp(const char* s1, const char* s2, size_t n);
char*	ft_strchr(const char* s, int c);
char*	ft_strnstr(const char* haystack, const char* needle, size_t len);
char*	ft_strchr(const char* s, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
