/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:05:19 by ilchahbi          #+#    #+#             */
/*   Updated: 2025/02/18 11:19:43 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
# define	ANIMAL_HPP

#include <iostream>
#include <string>

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