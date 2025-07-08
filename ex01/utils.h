/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 14:53:31 by yehara            #+#    #+#             */
/*   Updated: 2025/07/08 15:17:49 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

#include <string>
#include <iostream>
#include <iomanip>

bool is_only_space(std::string);
bool is_numeric(std::string);
void PrintHead();
std::string FormatChar(std::string);

#endif
