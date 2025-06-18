/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Client.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trysinsk <trysinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 09:21:07 by trysinsk          #+#    #+#             */
/*   Updated: 2025/06/18 09:42:31 by trysinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLIENT_HPP
# define CLIENT_HPP
# include "Serveur.hpp"
# include <iostream>

class Client
{
    public:

    Client();
    Client(const Client &copy);
    Client &operator=(const Client &copy);
    ~Client();

    private:

    
};

#endif