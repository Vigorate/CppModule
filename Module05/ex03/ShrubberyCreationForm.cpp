/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:06:04 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/22 15:35:42 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberryForm", 137, 145, target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

void				ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	Form::execute(executor);
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
	std::ofstream	ofs;
    std::string     filename = this->getTarget() + "_shrubbery";
	ofs.open(filename.c_str());
	ofs         <<"                                                                        " << std::endl
                <<"                                        ░░▒▒░░                          " << std::endl
                <<"                        ░░        ░░▒▒▒▒░░░░░░▒▒░░                      " << std::endl
                <<"                      ▓▓▓▓▓▓▒▒░░▒▒▒▒▒▒▓▓▒▒▓▓▒▒▒▒░░                      " << std::endl
                <<"                    ░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒░░░░                      " << std::endl
                <<"                      ▓▓▓▓▓▓▓▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░░░                    " << std::endl
                <<"                      ▓▓▓▓▒▒░░░░░░░░▒▒▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒  ░░░░            " << std::endl
                <<"                  ▒▒▓▓▓▓▒▒▒▒░░░░░░▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░        " << std::endl
                <<"                ░░██▓▓▓▓▓▓▒▒▓▓▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓        " << std::endl
                <<"      ░░▒▒▒▒    ░░██▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▓▓        " << std::endl
                <<"      ▒▒▓▓▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▓▓▒▒▒▒▒▒▒▒▓▓▓▓▒▒▒▒▒▒▒▒░░  " << std::endl
                <<"      ▒▒▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓██▓▓▓▓▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒░░" << std::endl
                <<"      ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒██████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓" << std::endl
                <<"  ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓" << std::endl
                <<"░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓░░" << std::endl
                <<"  ██▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓  " << std::endl
                <<"    ▒▒  ▒▒░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓  " << std::endl
                <<"          ▒▒▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓██  ▓▓▒▒▓▓▓▓██▓▓  ▒▒▒▒  ▓▓██▒▒▓▓▓▓▓▓▓▓  " << std::endl
                <<"            ▓▓██▒▒▒▒██████▓▓▒▒░░░░    ▒▒  ▒▒██▒▒▒▒              ░░░░    " << std::endl
                <<"                            ▓▓████    ▓▓  ░░▓▓                          " << std::endl
                <<"                              ▒▒██▓▓░░▒▒▓▓▓▓░░                          " << std::endl
                <<"                                  ██▓▓▓▓▓▓▓▓                            " << std::endl
                <<"                                  ▒▒▓▓▓▓▓▓▓▓                            " << std::endl
                <<"                                  ░░▓▓▓▓▓▓▒▒                            " << std::endl
                <<"                                    ▓▓▓▓▓▓▒▒                            " << std::endl
                <<"                                  ░░▓▓▓▓▓▓▓▓                            " << std::endl
                <<"                                  ▒▒▓▓▓▓▓▓▓▓                            " << std::endl
                <<"                                  ▓▓▓▓▓▓▓▓▒▒                            " << std::endl
                <<"                                  ▓▓▓▓▓▓▓▓▒▒                            " << std::endl
                <<"                                ░░▓▓▓▓▓▓▓▓▓▓                            " << std::endl
                <<"                                ░░▓▓▓▓▓▓▓▓▓▓                            " << std::endl
                <<"                                ▒▒▓▓▓▓▓▓▓▓▓▓                            " << std::endl
                <<"                                ▓▓▓▓▓▓▓▓▓▓▓▓▒▒                          " << std::endl
                <<"                                ▓▓▓▓▓▓▓▓▓▓▓▓▓▓                          " << std::endl
                <<"                              ▓▓▓▓██▓▓▓▓▒▒▓▓▓▓▒▒                        " << std::endl
                <<"                          ░░▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░                      " << std::endl
                <<"                      ░░██▒▒▒▒▓▓████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▓▓▒▒                " << std::endl;
	ofs.close();
}