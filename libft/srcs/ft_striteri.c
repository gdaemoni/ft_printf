/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgranule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 00:30:45 by hgranule          #+#    #+#             */
/*   Updated: 2019/04/07 02:58:14 by hgranule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	ind;

	ind = 0;
	if (s)
		if (f)
			while (s[ind])
			{
				(*f)(ind, &s[ind]);
				ind++;
			}
}
