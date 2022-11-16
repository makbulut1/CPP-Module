/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makbulut <makbulut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 18:09:27 by makbulut          #+#    #+#             */
/*   Updated: 2022/11/14 18:29:04 by makbulut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int j = 1;
    int i = 0;

    if (ac > 1)
    {
        while (av[j]){
            i = 0;
            while (av[j][i])
            {
                std::cout << (char)toupper(av[j][i]);
                i++;
            }
            j++;
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}
