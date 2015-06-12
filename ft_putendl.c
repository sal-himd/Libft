/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:30:07 by sal-himd          #+#    #+#             */
/*   Updated: 2014/11/04 18:45:00 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
