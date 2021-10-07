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
void	        *ft_memcpy(void *dst, const void *src, int c, size_t n);

#endif