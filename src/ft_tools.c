/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivier <olivier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/10/27 02:39:29 by olivier           #+#    #+#             */
/*   Updated: 2014/10/27 02:39:59 by olivier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_tools.h>

char	*ft_strjoin_free(char **s1, char *s2)
{
	char	*str;

	str = NULL;
	str = ft_strjoin(*s1, s2);
	ft_strdel(s1);
	return (str);
}