/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:05:19 by ilchahbi          #+#    #+#             */
/*   Updated: 2025/02/17 15:21:26 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
# define	ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
   		std::string type;

	public:
    	Animal();
		Animal(const Animal &other);
   		Animal &operator=(const Animal &other);
    	virtual ~Animal();
    	virtual void makeSound() const;
    	std::string getType() const;
};

#endif