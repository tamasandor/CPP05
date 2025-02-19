/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 22:48:47 by atamas            #+#    #+#             */
/*   Updated: 2025/02/19 22:51:22 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_hpp
#define Form_hpp

#include <iostream>

class Form
{
private:
	const std::string	m_name;
	bool				m_signed;
	const int			m_gradeToSign;
	const int			m_gradeToExecute;
public:
	Form();
	Form(Form &original);
	Form& operator =(Form &original);
	~Form();
};

#endif