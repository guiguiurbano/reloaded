/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:12:31 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/23 10:31:40 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb)
{
    int i;

    i = 0;  
    if (nb < 0)
        return (0);
    while(i * i < nb)
        i++;
    if (i * i == nb)
        return (i);
    else 
        return (0);
}
int main()
{
    int a;

    a = ft_sqrt(2);
    printf("%d", a);
    return 0;
}
