/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Program.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 18:25:23 by alromero          #+#    #+#             */
/*   Updated: 2020/10/14 23:23:49 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Program.hpp"

Program::Program():
	moriginal(""), program()
{
}

Program::Program(Program const &other):
	moriginal(other.moriginal), program(other.program)
{
}

Program::~Program()
{
}

Program &Program::operator=(Program const &other)
{
	this->moriginal = other.moriginal;
	this->program = other.program;
	return (*this);
}

bool Program::loadFromString(std::string const &str)
{
	size_t length = str.length();
	int countStart = 0;
	int instruction = 0;

	this->moriginal = str;
	for (size_t i = 0; i < length; i++)
	{
		switch (str[i])
		{
			case '>':
				this->program.addInstruction(Action::IncrPtr);
				instruction++;
				break;
			case '<':
				this->program.addInstruction(Action::DecrPtr);
				instruction++;
				break;
			case '+':
				this->program.addInstruction(Action::IncrData);
				instruction++;
				break;
			case '-':
				this->program.addInstruction(Action::DecrData);
				instruction++;
				break;
			case '.':
				this->program.addInstruction(Action::Output);
				instruction++;
				break;
			case ',':
				this->program.addInstruction(Action::Input);
				instruction++;
				break;
			case '[':
				this->program.addInstruction(Action::LoopStart);
				instruction++;
				countStart++;
				break;
			case ']':
				this->program.addInstruction(Action::LoopEnd);
				instruction++;
				countStart--;
				break;
		}
	}
	if (countStart != 0)
		return (false);
	this->program.setLoops(instruction);
	return (true);
}

bool Program::loadFromFile(std::string const &filename)
{
	std::stringstream ss;
	std::string line;
	std::ifstream infile(filename);

	if (!infile.is_open() || !infile.good())
		return (false);
	while (std::getline(infile, line))
		ss << line;
	infile.close();
	return (this->loadFromString(ss.str()));
}

void Program::execute(void)
{
	this->program.execute();
}
