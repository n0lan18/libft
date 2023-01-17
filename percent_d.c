/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleggeri <nleggeri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:08:46 by nleggeri          #+#    #+#             */
/*   Updated: 2023/01/17 14:07:16 by nleggeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	percent_d(int n)
{
	int		i;
	char	*s;

	i = 0;
	s = ft_itoa(n);
	i = percent_s(s);
	free (s);
	return (i);
}