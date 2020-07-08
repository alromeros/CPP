/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 11:46:14 by alromero          #+#    #+#             */
/*   Updated: 2020/07/08 20:07:28 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

std::string const ShrubberyCreationForm::trees[3] =
{
"\n \n "
"	oxoxoo    ooxoo\n"
"  ooxoxo oo  oxoxooo\n"
" oooo xxoxoo ooo ooox\n"
" oxo o oxoxo  xoxxoxo\n"
"  oxo xooxoooo o ooo\n"
"    ooo\\oo\\  /o/o\n"
"        \\  \\\\/ /\n"
"         |   /\n"
"         |  |\n"
"         | D|\n"
"         |  |\n"
"         |  |\n"
"  ______/____\\____\n",
"\n \n "
"       ccee88oo\n"
"  C8O8O8Q8PoOb o8oo\n"
" dOB69QO8PdUOpugoO9bD\n"
"CgggbU8OU qOp qOdoUOdcb\n"
"    6OuU  /p u gcoUodpP\n"
"      \\\\//  /douUP\n"
"        \\\\////\n"
"		|||/\\\n"
"         |||\\/\n"
"         |||||\n"
"   .....//||||\\....\n",
"\n \n "    
"              _{\\ _{\\{\\/}/}/}__\n"
"             {/{/\\}{/{/\\}(\\}{/\\} _\n"
"            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _\n"
"         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n"
"        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n"
"       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n"
"	{/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n"
"      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}\n"
"     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n"
"      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n"
"       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n"
"      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}\n"
"       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n"
"         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n"
"          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n"
"            {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n"
"             {/{\\{\\{\\/}/}{\\{\\}/}\n"
"              {){/ {\\/}{\\/} \\}\\}\n"
"              (_)  \\.-'.-/\n"
"          __...--- |'-.-'| --...__\n"
"   _...--\"   .-'   |'-.-'|  ' -. --..__\n"
" -\"    ' .  . '    |.'-._| '  . .  \n"
" .  \'-  \'    .--'  | '-.'|    .  '  . \n"
"          ' ..     |'-_.-|\n"
"  .  '  .       _.-|-._ -|-._  .  '  .\n"
"              .'   |'- .-|   '.\n"
"  ..-'   ' .  '.   `-._.-x   .'  '  - .\n"
"   .-' '        '-._______.-'     '  .\n"
};

ShrubberyCreationForm::ShrubberyCreationForm()
:		Form("ShrubberyCreationForm", 145, 137), target("unnamed")
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target)
:		Form("ShrubberyCreationForm", 145, 137), target(target)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
:			Form(other.getName(), other.getGradeSign(), other.getGradeExe()), target(other.target)
{
	if (other.getSign())
		this->setSign(1);
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (other.getSign())
		this->setSign(1);
	return (*this);
}

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	this->Form::execute(executor);
	srand(time(NULL));
	std::ofstream filo;
	std::string name = (std::string)this->target;
	name.append("_shrubbery");
	filo.open(name, std::ios::out);
	if (filo)
		filo << this->trees[rand() % 3] << std::endl;
	filo.close();
}

Form*	ShrubberyCreationForm::clone()
{
	Form *nuevo = new ShrubberyCreationForm(*this);
	return (nuevo);
}
