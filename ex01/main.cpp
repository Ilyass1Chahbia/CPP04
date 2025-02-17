/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:29:08 by ilchahbi          #+#    #+#             */
/*   Updated: 2025/02/17 14:58:48 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal *animals[4];

    for (int i = 0; i < 2; i++)
    {
        animals[i] = new Dog();
    }
    for (int i = 2; i < 4; i++)
    {
        animals[i] = new Cat();
    }

    for (int i = 0; i < 4; i++)
    {
        animals[i]->makeSound();
    }

    for (int i = 0; i < 4; i++)
    {
        delete animals[i];
    }

    return 0;
}
