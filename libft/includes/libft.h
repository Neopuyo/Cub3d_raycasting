/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:41:40 by amiguez           #+#    #+#             */
/*   Updated: 2023/03/01 09:55:55 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h> // malloc, free et exit 
# include <string.h> // NULL et size_t
# include <unistd.h> // write et read
# include <limits.h> // OPEN_MAX
# include <stdarg.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 160
# endif

# define FREE_S1 1
# define FREE_S2 2
# define FREE_BOTH 0

# define BASE_HEXA_LOW "0123456789abcdef"
# define BASE_HEXA_UP "0123456789ABCDEF"
# define UP 1
# define LOW 0

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}		t_list;

int		ft_atoi(const char *str);
char	*ft_itoa(int n);

void	*ft_calloc(size_t count, size_t size);

int		ft_isalphanum(int c);
int		ft_isall_alphanum(char *arg);
int		ft_isalpha(int c);
int		ft_isall_alpha(char *arg);
int		ft_isascii(int c);
int		ft_isall_ascii(char *str);
int		ft_isdigit(int c);
int		ft_isall_digit(char *arg);
int		ft_isprint(int c);
int		ft_isall_print(char *str);

int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);

int		ft_toupper(int c);
int		ft_tolower(int c);
void	ft_bzero(void *s, size_t n);
int		ft_strlen(char const *s);
int		ft_tablen(char **tab);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *src);
char	*ft_strndup(char *src, int size);
char	**ft_tabdup(char **tab);
char	*ft_strchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_search(char *s, char c);

char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strjoin_free(char *s1, char *s2, int fr);
char	**ft_split(char const *s, char c);
char	**ft_split_quotes(char *line, char c);
int		ft_skip_quote(char *line);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

int		ft_printf(const char *s, ...);
int		ft_putchar_fd(char c, int fd);
int		ft_putendl_fd(char *s, int fd);
int		ft_putstr_fd(char *s, int fd);
int		ft_putnbr_fd(int n, int fd);
int		ft_put_unnbr_fd(unsigned int n, int fd);

void	ft_lstadd_front(t_list **alst, t_list *new);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_back(t_list **alst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(void *content);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

void	ft_free_2d_array_n(char **array, int n);
void	ft_free_2d_array(char **array);

char	*get_next_line(int fd);

#endif
