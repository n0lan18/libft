/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleggeri <nleggeri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 01:29:46 by nleggeri          #+#    #+#             */
/*   Updated: 2022/11/07 23:11:28 by nleggeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*finish(int n, int nlen, int neg, char *res)
{
	int		i;

	i = nlen - 1;
	if (neg == 1)
		i++;
	while (i >= 0)
	{
		res[i] = '0' + n % 10;
		n = n / 10;
		i--;
	}
	if (neg == 1)
		res[0] = '-';
	res[nlen + neg] = '\0';
	return (res);
}

static int	nbrlen(int nbr)
{
	int	len;

	len = 0;
	while (nbr >= 0)
	{
		nbr = nbr / 10;
		len++;
		if (nbr == 0)
			break ;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		neg;
	int		nlen;

	neg = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		neg = 1;
		n *= -1;
	}
	nlen = nbrlen(n);
	res = ft_calloc((nlen + neg + 1), sizeof(char));
	if (! res)
		return (NULL);
	res = finish(n, nlen, neg, res);
	return (res);
}
