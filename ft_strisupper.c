/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 12:59:32 by sal-himd          #+#    #+#             */
/*   Updated: 2014/11/09 12:59:34 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strisupper(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_isupper(str[i]))
			return (0);
	}
	return (1);
}
