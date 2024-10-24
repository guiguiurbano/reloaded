/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:19:49 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/23 11:25:05 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while(str[i])
        i++;
    return (i);
}
int main()
{
    printf("%d", ft_strlen("ola"));
    return (0);
}