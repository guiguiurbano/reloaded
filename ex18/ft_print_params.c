/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:08:59 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/23 12:27:42 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}
int main(int ac, char **av)
{
    int i;

    i = 1;
    if (ac > 1)
    {
        while(i < ac)
        {
            ft_putstr(av[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    else 
        write(1, "\n", 1);
    return (0);
}