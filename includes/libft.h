/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsatou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 12:16:54 by bsatou            #+#    #+#             */
/*   Updated: 2019/07/11 12:57:51 by bsatou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_atoi(const char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(const char *src);
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);
size_t	ft_strlen(const char *str);
char	*ft_strncat(char *dest, const char *src, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
void	ft_swap(int *a, int *b);


#endif
