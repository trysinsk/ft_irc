/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Client.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trysinsk <trysinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 09:21:09 by trysinsk          #+#    #+#             */
/*   Updated: 2025/06/18 09:48:03 by trysinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Client.hpp"

Client::Client()
{
    std::cout << "Client constructor called" << std::endl;
}

Client::Client(const Client &copy)
{
    std::cout << "Client copy constructor called" << std::endl;
    *this = copy;
}

Client &Client::operator=(const Client &copy)
{
    std::cout << "operator assignation Client called" << std::endl;
    return (*this);
}

Client::~Client()
{
    std::cout << "Client destructor called" << std::endl;
}