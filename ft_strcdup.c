/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 22:05:31 by mmora-se          #+#    #+#             */
/*   Updated: 2021/06/02 22:06:58 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	************************************************************************* */
/*	ft_strcdup: Hace copia hasta que encuentra el carácter c, sin incluirlo   */
/*              si no lo encuentra hace copia de la cadena entera             */
/*             Asigna suficiente memoria para una copia de ese trozo la cadena*/
/*             Si no hay suficiente memoria disponible, se devuelve NULL      */
/*  ************************************************************************* */
#include "libft.h"

char	*ft_strcdup(const char *s, int c)
{
	char	*p;
	size_t	i;

	i = 0;
	while ((s[i] != (char)c) && (s[i] != '\0'))
		i++;
	p = (char *)malloc(sizeof(char) * (i + 1));
	if (p == 0)
		return (0);
	p[i] = '\0';
	while (i-- > 0)
		p[i] = s[i];
	return (p);
}
