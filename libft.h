#ifndef FT_LIBFT_H
# define FT_LIBFT_H
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>

# define BUFF_SIZE 32
# define ERROR(value) if(value == 1) return (-1);

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;

}				t_list;

void			ft_bzero(void *s, size_t n);
void	        *ft_memcpy(void *dst, const void *src, size_t n);
int				ft_atoi(char *str);
void			ft_bzero(void *s, size_t n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			ft_putchar(char c);
size_t			ft_strlen(const char *s);
char			*ft_strcpy(char *dst, const char *src);
int				ft_tolower(int c);
int				ft_toupper(int c);
void			*ft_memset(void *b, int c, size_t len);
void			*ft_memmove(void *dst, const void *src, size_t len);

#endif