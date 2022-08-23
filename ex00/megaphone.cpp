/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makbulut <makbulut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 18:09:27 by makbulut          #+#    #+#             */
/*   Updated: 2022/08/23 19:49:17 by makbulut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
int main(int ac, char **av)
{
    if (ac > 1)
    {
        for (int j = 1; av[j] != 0; j++)
            for(int i = 0; av[j][i] != 0; i++)
            {
                if (av[j][i] <= 'z' && av[j][i] >= 'a')
                    av[j][i] = av[j][i] - 32;
                cout << (char)av[j][i];
            }
        cout << endl;
    }
    else
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
    return (0);
}
