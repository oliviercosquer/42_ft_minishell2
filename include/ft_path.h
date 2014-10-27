/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivier <olivier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/10/27 02:43:13 by olivier           #+#    #+#             */
/*   Updated: 2014/10/27 02:57:56 by olivier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PATH_H
# define FT_PATH_H
# include <libft.h>
# include <ft_tools.h>
typedef struct s_path
{
	char			*str;
	struct	s_path	*next;
}				t_path;

t_path			*ft_new_path(char *str);
t_path			*ft_add_path(t_path *path, char *str);
void			ft_del_path(t_path *path);
char			*ft_get_full_path(t_path *path);
char			*ft_get_full_path_bin(t_path *path, char *bin_name);
#endif