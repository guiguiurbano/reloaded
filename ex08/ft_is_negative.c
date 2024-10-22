/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:39:40 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/22 16:06:35 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_is_negative(int n)
{
    if (n < 0)
    {
        ft_putchar('N'); 
    }
    else
        ft_putchar('P');
}
int main()
{
    ft_is_negative(0);
    return (0);
}
