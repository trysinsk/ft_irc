/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Client.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trysinsk <trysinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:37:39 by trysinsk          #+#    #+#             */
/*   Updated: 2025/12/01 10:37:41 by trysinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLIENT_HPP
#define CLIENT_HPP

#include "Server.hpp"
#include "Channel.hpp"

class Client
{
private:
	int fd;
	bool isOperator;
	bool registered;
	std::string nickname;
	bool logedin;
	std::string username;
	std::string buffer;
	std::string ipadd;
	std::vector<std::string> ChannelsInvite;
public:
	Client();
	Client(std::string nickname, std::string username, int fd);
	~Client();
	Client(Client const &src);
	Client &operator=(Client const &src);
	//---------------//Getters
	int GetFd();
	bool getRegistered();
	bool GetInviteChannel(std::string &ChName);
	std::string GetNickName();
	bool 		GetLogedIn();
	std::string GetUserName();
	std::string getIpAdd();
	std::string getBuffer();
	std::string getHostname();
	//---------------//Setters
	void SetFd(int fd);
	void SetNickname(std::string& nickName);
	void setLogedin(bool value);
	void SetUsername(std::string& username);
	void setBuffer(std::string recived);
	void setRegistered(bool value);
	void setIpAdd(std::string ipadd);
	//---------------//Methods
	void clearBuffer();
	void AddChannelInvite(std::string &chname);
	void RmChannelInvite(std::string &chname);
};

#endif