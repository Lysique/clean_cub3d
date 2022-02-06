/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 08:54:15 by tamighi           #+#    #+#             */
/*   Updated: 2022/02/06 14:38:45 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/global.h"

void	my_write(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
		i++;
	write(2, str, i);
}
