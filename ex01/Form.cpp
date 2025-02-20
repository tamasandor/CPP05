/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 22:48:49 by atamas            #+#    #+#             */
/*   Updated: 2025/02/20 15:30:13 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute) : m_name(name), m_gradeToSign(gradeToSign), m_gradeToExecute(gradeToExecute)
{
	m_signed = false;
}

Form::Form(const Form &original) : m_name(original.m_name), m_gradeToSign(original.m_gradeToSign), m_gradeToExecute(original.m_gradeToExecute)
{
	if (this != &original)
	{
		this->m_signed = original.m_signed;
	}
}

Form& Form::operator =(const Form &original)
{
	if (this != &original)
	{
		this->m_signed = original.m_signed;
	}
	return (*this);
}

Form::~Form()
{

}
