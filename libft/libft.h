/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 01:26:27 by sdarron           #+#    #+#             */
/*   Updated: 2020/02/03 20:25:07 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <math.h>

# define BUFF_SIZE 1
# define FD_SIZE 100

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
int					ft_isalnum(int ch);
int					ft_isalpha(int ch);
int					ft_isascii(int ch);
int					ft_isdigit(int ch);
int					ft_isprint(int ch);
void				*ft_memccpy(void *des, const void *src, int ch, size_t n);
void				*ft_memchr(const void *arr, int c, size_t n);
int					ft_memcmp(const void *arr1, const void *arr2, size_t n);
void				*ft_memcpy(void *des, const void *src, size_t n);
void				*ft_memmove(void *des, const void *src, size_t n);
void				*ft_memset(void *memptr, int val, size_t num);
char				*ft_strcat(char *des, const char *src);
char				*ft_strchr(const char *str, int sym);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strdup(const char *src);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlen(const char *c);
char				*ft_strncat(char *des, const char *app, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strnstr(const char *b, const char *l, size_t len);
char				*ft_strrchr(const char *str, int ch);
char				*ft_strstr(const char *str1, const char *str2);
int					ft_tolower(int ch);
int					ft_toupper(int ch);
void				ft_putchar(char c);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putstr(char const *s);
void				ft_strclr(char *s);
int					ft_strequ(char const *s1, char const *s2);
void				ft_striter(char *s, void (*f)(char *));
int					ft_strnequ(char const *s1, char const *s2, size_t n);
void				ft_striteri(char *s, void(*f)(unsigned int, char *));
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
char				*ft_strmap(char const *s, char(*f)(char));
char				*ft_strmapi(char const *s, char(*f)(unsigned int, char));
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
char				*ft_itoa(int n);
char				*ft_strrev(char *s);
char				**ft_strsplit(char const *s, char c);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void(*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_quicksort(int arr[], int left, int right);
int					ft_arrmax(int arr[], int beg, int end);
int					ft_arrmin(int arr[], int beg, int end);
int					ft_get_next_line(int fd, char **line);

#endif
