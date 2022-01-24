/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wr_and_ex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 10:26:53 by tamighi           #+#    #+#             */
/*   Updated: 2022/01/20 10:25:55 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/global.h"

void	wr_and_ex(char *msg, int ex)
{
	if(msg)
		my_write(msg);
	my_write("Exit.\n");
	exit(ex);
}
