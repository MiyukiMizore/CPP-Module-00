/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:18:33 by mfusil            #+#    #+#             */
/*   Updated: 2023/03/08 18:23:35 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i <= argc - 1; i++)
        {
            for (int j = 0; argv[i][j]; j++)
                std::cout <<(char) toupper(argv[i][j]);
            if (i < argc - 1)
                std::cout << ' ';
        }
        std::cout << std::endl;
    }
} 