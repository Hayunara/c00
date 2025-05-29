/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hade-sou <hade-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:22:24 by hade-sou          #+#    #+#             */
/*   Updated: 2025/05/29 18:41:36 by hade-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
    char num;

    num = '0';
    while (num <= '9')
    {
        write(1, &num, 1);
        num++;
    }
}

/*int main (void){
    ft_print_numbers();
}*/
