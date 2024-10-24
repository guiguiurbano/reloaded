/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:47:31 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/22 23:30:36 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b != 0)
    {
        *div = a / b;
        *mod = a % b;
    }
    else
    {
        *div = 0;
        *mod = 0;
    }
}
int main()
{
    int x;
    int y;
    int div;
    int mod;

    x = 11; 
    y = 5;
    ft_div_mod(x, y, &div, &mod);
    printf("x = %d\n", div);
    printf("y = %d\n", mod);
    return 0;
}