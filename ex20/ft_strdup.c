/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:16:49 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/23 15:36:58 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    
    while(str[i])
        i++;
    return (i);
}
char *ft_strdup(char *src)
{
    int i = 0;
    char *dest;
    
    if (src == NULL)
        return (NULL);
    
    
    dest = malloc(ft_strlen(src) + 1);
    if (dest == NULL)
        return (NULL);
        
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);   
}
int main()
{
    char *str;

    str = ft_strdup(NULL);
    printf("%s", str);
    free(str);
    return 0;
}