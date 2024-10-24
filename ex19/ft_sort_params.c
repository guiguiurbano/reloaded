/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:28:32 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/23 14:58:47 by guilhermeur      ###   ########.fr       */
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

int check(char *s1, char *s2)
{
    int i;
    
    while (s1[i] && (s1[i] == s2[i]))
    {
        i++;
    }
    return(s1[i] - s2[i]);
}
void ft_sort_params(int ac, char **av)
{
    int i;
    int j;
    char *tmp;

    i = 1;
    
    while (i < ac - 1)
    {
        j = i + 1;
        while(j < ac)
        {
            if(check(av[i], av[j]) > 0)
            {
                tmp = av[i];
                av[i] = av[j];
                av[j] = tmp;
            }
            j++;
        }
        i++;
    }
}
int main(int ac, char **av)
{
    int i;

    i = 1;
    ft_sort_params(ac, av);
    while(i < ac)
    {
        ft_putstr(av[i]);
        ft_putstr("\n");
        i++;
    }
    return (0);
}
