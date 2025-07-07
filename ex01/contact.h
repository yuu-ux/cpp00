/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 01:01:50 by yehara            #+#    #+#             */
/*   Updated: 2025/07/07 01:53:29 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <string>
#include <iostream>

class Contact {
	public:
		Contact();
		Contact(std::string first_name, std::string last_name, std::string nick_name, std::string phone_number, std::string darkest_secret);
		std::string get_first_name() const;
		std::string get_last_name() const;
		std::string get_nick_name() const;
		std::string get_phone_number() const;
		std::string get_darkest_secret() const;

	private:
		std::string	first_name_;
		std::string	last_name_;
		std::string	nick_name_;
		std::string	phone_number_;
		std::string	darkest_secret_;
};

#endif
