/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 00:14:34 by mflor             #+#    #+#             */
/*   Updated: 2020/11/08 03:57:04 by mflor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_putstr_fd(char *s, int fd)
{
	int k;

	if (s != NULL)
	{
		k = 0;
		while (s[k] != '\0')
		{
			write(fd, &s[k], 1);
			k++;
		}
	}
}
