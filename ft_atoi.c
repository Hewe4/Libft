/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-ruit <ide-ruit@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:32:58 by ide-ruit          #+#    #+#             */
/*   Updated: 2023/11/12 18:22:04 by ide-ruit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nb) {
    int i;
    int s;
    int n;
    int d;

    i = 0;
    s = 1;
    n = 0;
	d = 0;
    while (nb[i] == ' ' || (nb[i] >= '\t' && nb[i] <= '\r'))
        i++;
    while (nb[i] == '+' || nb[i] == '-') {
        if (nb[i] == '-')
            s *= -1;
        i++;
    }
    while (nb[i] >= '0' && nb[i] <= '9') {
        d = nb[i] - '0';

        if (n > (2147483647 - d) / 10) {
            if (s == 1)
                return 2147483647;
            else
                return -2147483648;
        }

        n = n * 10 + d;
        i++;
    }
    return n * s;
}