/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:32:57 by atamas            #+#    #+#             */
/*   Updated: 2025/02/18 20:08:05 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : m_name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	m_grade = grade;
}

Bureaucrat::~Bureaucrat()
{

}


const std::string Bureaucrat::getName() const
{
	return (m_name);
}

int Bureaucrat::getGrade() const
{
	return (m_grade);
}

void	Bureaucrat::incrase()
{
	if (m_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	m_grade--;
}

void	Bureaucrat::decrease()
{
	if (m_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	m_grade++;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

std::ostream &operator <<(std::ostream &out, Bureaucrat &burocreat)
{
	out << burocreat.getName() << ", bureaucrat grade " << burocreat.getGrade() << ".\n";
	return (out);
}

