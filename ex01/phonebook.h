/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 01:06:25 by yehara            #+#    #+#             */
/*   Updated: 2025/07/08 15:39:59 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <string>
#include <cstdlib>
#include "contact.h"

const int kMaxContacts = 8;

class PhoneBook {
	public:
		PhoneBook();
		void Add();
		void Search() const ;
		Contact get_contact(int) const;
		int get_size() const;
		std::string InputInfo(std::string);
		std::string InputPhoneNumber();
		bool is_validate(std::string index) const;
		void PrintContact() const;
		void PrintDetailContact(std::string index) const;
	private:
		Contact		contacts_[8];
		int	size_;
};
#endif
