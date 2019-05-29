/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoyaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 23:15:55 by pmoyaha           #+#    #+#             */
/*   Updated: 2019/05/25 03:41:07 by pmoyaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include  <unistd.h>
# include  <stdlib.h>
# include  <string.h>
# include  <stdio.h>
# include  <ctype.h>

int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strdup(const char *s1);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dst, const *src, size_t n);
char	*ft_strcpy(char *dst, const *src);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strnew(size_t size);
char	*ft_strmp(char const *s, char (*f) (char));
char	*ft_mapi(char const *s, char (*f) (unsigned int, char));
char	*ft_strsub(char const *s, unsigned int start size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	**ft_strsplit(char const *s);
char	*ft_itoa(int n);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f) (char *));
void	ft_striteri(char *s, void (*f) (unsigned int, char *));
size_t	ft_stlen(const char *s);
size_t	ft_strlcat(const *dst, const char *src, size_t dstsize);

#endif