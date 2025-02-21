/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 20:37:46 by atamas            #+#    #+#             */
/*   Updated: 2025/02/21 21:06:00 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <iostream>

class ShrubberyCreationForm : public AForm
{
private:
	std::string m_target;
public:
	ShrubberyCreationForm(const std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &original);
	ShrubberyCreationForm &operator= (const ShrubberyCreationForm &original);
	~ShrubberyCreationForm();
	void action() const;
};
