/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivier <olivier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/10/27 02:46:14 by olivier           #+#    #+#             */
/*   Updated: 2014/10/27 02:57:38 by olivier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_path.h>

t_path				*ft_new_path(char *str)
{
	t_path	*path;

	path = NULL;
	path = (t_path *)malloc(sizeof(t_path));
	if (path)
	{
		path->str = str;
		path->next = NULL;
	}
	return (path);
}

t_path				*ft_add_path(t_path *path, char *str)
{
	t_path	*first;

	if (path)
	{
		first = path;
		while (path->next)
			path = path->next;
		path->next = ft_new_path(str);
	}
	else
		first = ft_new_path(str);
	return (first);
}

void				ft_del_path(t_path *path)
{
	t_path	*tmp;

	if (path)
	{
		while (path->next)
		{
			tmp = path;
			ft_strdel(&tmp->str);
			path = path->next;
			free(tmp);
		}
	}
}

char				*ft_get_full_path(t_path *path)
{
	char	*full_path;

	full_path = NULL;
	while (path->next)
	{
		if (full_path)
			full_path = ft_strjoin_free(&full_path, path->str);
		else
			full_path = ft_strdup(path->str);
		path = path->next;
	}
	return (full_path);
}

char				*ft_get_full_path_bin(t_path *path, char *bin_name)
{
	char	*full_path;

	full_path = ft_get_full_path(path);
	full_path = ft_strjoin_free(&full_path, bin_name);
	return (full_path);
}