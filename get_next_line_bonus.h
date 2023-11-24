/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealislam <ealislam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:45:42 by ealislam          #+#    #+#             */
/*   Updated: 2023/11/24 09:33:58 by ealislam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 50
# endif
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_size
{
	unsigned int	s_to_nl;
	unsigned int	s_to_null;
}	t_size;

char	*get_next_line(int fd);
t_size	get_s(char *str);
void	str_join(char *cur_bfr, char **fnl_str, char *new_dst);
int		check_n(char *cur_bfr);
char	*free_and_return_null(char **remain, char **final, char **cur_buf);
#endif