/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Action.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 18:25:07 by alromero          #+#    #+#             */
/*   Updated: 2020/10/14 23:23:51 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Action.hpp"

Action::Action():
	curr(0), pointer(0)
{
	this->stack.resize(30000, 0);
}

Action::Action(Action const &other):
	curr(other.curr), pointer(other.pointer)
{
	this->instructions.clear();
	for (int i = 0; i < 30000; i++)
		this->stack[i] = other.stack[i];
	this->instructions = other.instructions;
}

Action::~Action()
{
	this->instructions.clear();
}

Action &Action::operator=(Action const &other)
{
	this->instructions.clear();
	this->curr = other.curr;
	this->pointer = other.pointer;
	for (int i = 0; i < 30000; i++)
		this->stack[i] = other.stack[i];
	this->instructions = other.instructions;
	return (*this);
}


void Action::addInstruction(int instruction)
{
	this->instructions.push_back(instruction);
}

void Action::setLoops(int instr)
{
	size_t length = this->instructions.size();

	this->loops.reserve(instr);
	for (size_t i = 0; i < length; i++)
	{
		if (this->instructions[i] == LoopStart)
			this->addLoop(i, this->moveToNextLoop(i, length));
	}
}

void Action::addLoop(int start, int end)
{
	this->loops[start] = end;
	this->loops[end] = start;
}

int Action::moveToNextLoop(int start, int size)
{
	int sub = 0;

	start++;
	while (start < size && sub >= 0)
	{
		if (this->instructions[start] == LoopStart)
			sub++;
		else if (this->instructions[start] == LoopEnd)
			sub--;
		start++;
	}
	return (--start);
}

void Action::executeInstruction(int instruction)
{
	switch (instruction)
	{
		case IncrData:
			this->stack[this->pointer]++;
			break;
		case IncrPtr:
			this->pointer++;
			break;
		case DecrData:
			this->stack[this->pointer]--;
			break;
		case DecrPtr:
			this->pointer--;
			break;
		case Input:
			std::cin >> this->stack[this->pointer];
			break;
		case Output:
			std::cout << this->stack[this->pointer];
			break;
		case LoopStart:
			if (this->stack[this->pointer] == 0)
				this->curr = this->loops[this->curr];
			break;
		case LoopEnd:
			if (this->stack[this->pointer] != 0)
				this->curr = this->loops[this->curr];
			break;
	}
}

void Action::execute(void)
{
	size_t length = this->instructions.size();
	
	for (this->curr = 0; this->curr < length; this->curr++)
		this->executeInstruction(this->instructions[this->curr]);
}
