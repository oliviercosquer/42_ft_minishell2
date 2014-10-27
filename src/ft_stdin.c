/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivier <olivier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/10/27 02:28:59 by olivier           #+#    #+#             */
/*   Updated: 2014/10/27 03:13:42 by olivier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_stdin.h>
#include <get_next_line.h>

void	ft_put_prompt(void)
{
	ft_putstr(PROMPT);
}

void	ft_read_stdin(void)
{
	char	*str;
	int		ret;
	int		has_quit;

	str = NULL;
	has_quit = 0;
	ft_put_prompt();
	while (has_quit == 0 && (ret = get_next_line(1, &str)))
	{
		ft_putstr(str);
		has_quit = ft_treat_stdin(str);
		ft_strdel(&str);
		ft_putstr("\n");
		if (has_quit == 0)
			ft_put_prompt();
	}
}

int		ft_treat_stdin(char *str)
{
	int		has_quit;

	has_quit = 0;
	/*if (ft_is_build_in(str))
		ft_handle_built_in(str);
	if (ft_is_bin(str))
		ft_handle_bin(str);*/
	if (ft_strcmp(str, "exit") == 0)
		has_quit = 1;
	return (has_quit);
}