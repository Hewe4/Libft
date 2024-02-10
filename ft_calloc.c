/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-ruit <ide-ruit@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:54:51 by ide-ruit          #+#    #+#             */
/*   Updated: 2024/02/10 17:30:30 by ide-ruit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t ne, size_t te)
{
	void	*call;

	call = malloc(ne * te);
	if(!call)
	return(NULL);
	ft_bzero(call,(ne * te));
	return (call);
}