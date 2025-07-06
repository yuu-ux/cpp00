/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 01:01:53 by yehara            #+#    #+#             */
/*   Updated: 2025/07/07 01:55:02 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.h"

std::string Contact::get_first_name() const {
	return (first_name_);
}

std::string Contact::get_last_name() const {
	return (last_name_);
}

std::string Contact::get_nick_name() const {
	return (nick_name_);
}

std::string Contact::get_phone_number() const {
	return (phone_number_);
}

std::string Contact::get_darkest_secret() const {
	return (darkest_secret_);
}

void Contact::set_first_name(std::string first_name) {
	first_name_ = first_name;
}

void Contact::set_last_name(std::string last_name) {
	last_name_ = last_name;
}

void Contact::set_nick_name(std::string nick_name) {
	nick_name_ = nick_name;
}

void Contact::set_phone_number(std::string phone_number) {
	phone_number_ = phone_number;
}

void Contact::set_darkest_secret(std::string darkest_secret) {
	darkest_secret_ = darkest_secret;
}
