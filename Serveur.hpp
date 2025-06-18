/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serveur.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trysinsk <trysinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 09:21:04 by trysinsk          #+#    #+#             */
/*   Updated: 2025/06/18 09:42:59 by trysinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SERVEUR_HPP
# define SERVEUR_HPP
# include "Client.hpp"
# include <iostream>

class Serveur
{
    public:
    
    Serveur();
    Serveur(const Serveur &copy);
    Serveur &operator=(const Serveur &copy);
    ~Serveur();

    private:

    
};

#endif