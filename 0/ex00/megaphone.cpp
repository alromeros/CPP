/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 18:14:34 by alromero          #+#    #+#             */
/*   Updated: 2020/05/18 19:47:01 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

char *string_upper(char *str)
{
    int     i;
    char    *string;

    string = new char[strlen(str)];
    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            string[i] = str[i] - 32;
        }
		else
			string[i] = str[i];
        i++;
    }
    string[i] = '\0';
    return (string);
}

int     main(int argc, char **argv)
{
    int     i;
    char    *str;

    i = 1;
    if (argc == 1)
    {
        std::cout <<  "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    else
    {
        while (i < argc)
        {
            str = string_upper(argv[i++]);
            std::cout << str;
            if (i != argc)
                std::cout << " ";
            delete str;
        }
    }
    std::cout << std::endl;
}
