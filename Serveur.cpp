/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serveur.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trysinsk <trysinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 09:21:02 by trysinsk          #+#    #+#             */
/*   Updated: 2025/06/18 09:46:51 by trysinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serveur.hpp"

Serveur::Serveur()
{
    std::cout << "Serveur constructor called" << std::endl;
}

Serveur::Serveur(const Serveur &copy)
{
    std::cout << "Serveur copy constructor called" << std::endl;
    *this = copy;
}

Serveur &Serveur::operator=(const Serveur &copy)
{
    std::cout << "operator assignation Serveur called" << std::endl;
    return (*this);
}

Serveur::~Serveur()
{
    std::cout << "Serveur destructor called" << std::endl;
}