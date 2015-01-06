/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:43:23 by gpetrov           #+#    #+#             */
/*   Updated: 2015/01/05 23:05:21 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include "Contact.class.hpp"

static int	nbContacts = 0;
static Contact		phonebook[8];

Contact	ft_addContact(void){
	Contact		newContact;
	std::string	buffer;

	std::cout << "ADD a new Contact :" << std::endl;
	std::cout << "firt name : " << std::endl;
	std::cin >> buffer;
	newContact.setFirstname(buffer);
	std::cout << "last name : " << std::endl;
	std::cin >> buffer;
	newContact.setLastname(buffer);
	std::cout << "nickname : " << std::endl;
	std::cin >> buffer;
	newContact.setNickname(buffer);
	std::cout << "login : " << std::endl;
	std::cin >> buffer;
	newContact.setLogin(buffer);
	std::cout << "postal address : " << std::endl;
	std::cin >> buffer;
	newContact.setPostalAddress(buffer);
	std::cout << "email address : " << std::endl;
	std::cin >> buffer;
	newContact.setEmailAddress(buffer);
	std::cout << "phone number : " << std::endl;
	std::cin >> buffer;
	newContact.setPhone(buffer);
	std::cout << "birthday date : " << std::endl;
	std::cin >> buffer;
	newContact.setBirthdayDate(buffer);
	std::cout << "favorite meal : " << std::endl;
	std::cin >> buffer;
	newContact.setMeel(buffer);
	std::cout << "underwear color : " << std::endl;
	std::cin >> buffer;
	newContact.setUnderwearColor(buffer);
	std::cout << "darkest secret : " << std::endl;
	std::cin >> buffer;
	newContact.setDarkestSecret(buffer);
	
	return newContact;
}

void	ft_showTable(void)
{
	int		i;

	i = 0;
	std::cout << std::setw(10);
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	while (i < nbContacts){
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << i;
		std::cout << "|";
		std::cout << std::setw(10);
		std::string firstname = phonebook[i].getFirstname();
		if (firstname.length() > 10){
			firstname = firstname.erase(9, firstname.length() - 9);
			firstname.append(".");
		}
		std::cout << firstname;
		std::cout << "|";
		std::string lastname = phonebook[i].getLastname();
		if (lastname.length() > 10){
			lastname = lastname.erase(9, lastname.length() - 9);
			lastname.append(".");
		}
		std::cout << std::setw(10);
		std::cout << lastname;
		std::cout << "|";
		std::cout << std::setw(10);
		std::string nickname = phonebook[i].getNickname();
		if (nickname.length() > 10){
			nickname = nickname.erase(9, nickname.length() - 9);
			nickname.append(".");
		}
		std::cout << nickname;
		i++;
		std::cout << "|" << std::endl;
	}
}

void	ft_showRow(void)
{
	int		index;

	std::cout << "Give the index of the contact you want to see" << std::endl;
	std::cin >> index;
	if (std::cin.good() && index >= 0 && index < nbContacts)
	{
		std::cout << phonebook[index].getFirstname() << std::endl;
		std::cout << phonebook[index].getLastname() << std::endl;
		std::cout << phonebook[index].getNickname() << std::endl;
		std::cout << phonebook[index].getLogin() << std::endl;
		std::cout << phonebook[index].getPostalAddress() << std::endl;
		std::cout << phonebook[index].getEmailAddress() << std::endl;
		std::cout << phonebook[index].getPhone() << std::endl;
		std::cout << phonebook[index].getBirthDayDate() << std::endl;
		std::cout << phonebook[index].getMeel() << std::endl;
		std::cout << phonebook[index].getUnderWearColor() << std::endl;
		std::cout << phonebook[index].getDarkestSecret() << std::endl;
	}
	else
	{
		std::cin.clear();
		std::cout << "Sorry, no match" << std::endl;
	}
}

int		main(void)
{
	std::cout << "Welcome this is a phonebook, here are the availables commands : ADD, SEARCH and EXIT" << std::endl;

	while (!std::cin.eof())
	{
		std::string buffer;
		std::cin >> buffer;
		if (buffer == "EXIT")
			return 0;
		else if (buffer == "ADD")
		{
			if (nbContacts < 8){
				phonebook[nbContacts] = ft_addContact();
				std::cout << "A new contact has been hadded to your awesome phonebook" << std::endl;
				nbContacts++;
			}
			else
				std::cout << "Sorry maximum contacts is 8" << std::endl;
		}
		else if (buffer == "SEARCH"){
			if (nbContacts == 0)
				std::cout << "Your Phonebook is empty" << std::endl;
			else{
				ft_showTable();
				ft_showRow();
			}
		}
	}
	std::cout << std::endl;
	std::cout << "Bye Bye :)" << std::endl;
	return 0;
}
