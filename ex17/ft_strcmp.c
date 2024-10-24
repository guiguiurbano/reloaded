/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:27:17 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/23 14:38:42 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;
    
    i = 0;
    while(s1[i] && s2[i])
        i++;
    return (s1[i] - s2[i]);
}
int main()
{
    printf("%d", ft_strcmp("ola5", "ola3"));
    return 0;
}