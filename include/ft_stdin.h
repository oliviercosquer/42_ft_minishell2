/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivier <olivier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/10/27 02:36:53 by olivier           #+#    #+#             */
/*   Updated: 2014/10/27 03:12:00 by olivier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIN_H
# define FT_STDIN_H
# define PROMPT "$$>"
# include <unistd.h>
# include <libft.h>
# include <ft_tools.h>

void	ft_put_prompt(void);
void	ft_read_stdin(void);
int		ft_treat_stdin(char *str);
#endif