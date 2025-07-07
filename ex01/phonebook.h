/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 01:06:25 by yehara            #+#    #+#             */
/*   Updated: 2025/07/07 01:44:32 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include <string>
#include "contact.h"

class PhoneBook {
	public:
		PhoneBook();
		void Add();
		void Search();
		Contact get_contact(int) const;
		int get_size() const;
		std::string InputInfo(std::string);
		std::string InputPhoneNumber();
		bool is_validate(std::string index);
	private:
		Contact		contacts_[8];
		int	size_;
};
#endif
