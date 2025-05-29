/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hade-sou <hade-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:43:41 by hade-sou          #+#    #+#             */
/*   Updated: 2025/05/29 18:19:34 by hade-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
    char letter;
    
    letter = 'z';
    while (letter >= 'a')
    {
        write(1, &letter, 1);
        letter--;
    }
}

/*int main (void){
    ft_print_alphabet();
}*/