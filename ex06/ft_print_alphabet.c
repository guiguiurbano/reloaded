/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:20:44 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/22 15:30:47 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_print_alphabet(void)
{
    write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
}
int main()
{
    ft_print_alphabet();
    return 0;
}
