/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Action.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 18:15:52 by alromero          #+#    #+#             */
/*   Updated: 2020/10/14 18:25:00 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACTION_HPP
# define ACTION_HPP

# include <iostream>
# include <array>
# include <deque>
# include <vector>

class Action
{
	private:
		size_t curr;
		int pointer;
		std::vector<char> stack;
		std::deque<int> instructions;
		std::vector<int> loops;
	public:
		Action();
		Action(Action const &other);
		virtual ~Action();

		Action &operator=(Action const &other);


		void addInstruction(int instruction);
		void setLoops(int instr);
		void addLoop(int start, int end);
		int moveToNextLoop(int start, int size);


		void executeInstruction(int instruction);
		void execute(void);

			enum InstructionType {
			IncrData,
			IncrPtr,
			DecrData,
			DecrPtr,
			Input,
			Output,
			LoopStart,
			LoopEnd
		};
};

#endif
