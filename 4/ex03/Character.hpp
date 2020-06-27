/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 17:04:30 by alromero          #+#    #+#             */
/*   Updated: 2020/06/28 00:49:42 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"

class Character: public ICharacter
{
/*	private:
		std::string 		name;
		AMateria 			*slot[4];
		int					checker[4];
	public:
		Character();
		Character(Character const &other);
		Character(std::string const name);
		Character 			&operator=(Character const &other);
		~Character();

		std::string const & getName() const;
		void				setName(std::string const name);
		AMateria 			*getSlot(int) const;
		void				setSlot( AMateria	*slot );
		void 				equip(AMateria *m);
		void				unequip(int idx);
		void 				use(int idx, ICharacter &target);
		void				setChecker(int idx);
		int					getChecker(int idx) const;*/
		private:
	Character();

	std::string name;
	int equipped;
	AMateria *inventory[4];
public:
	Character(std::string const &name);
	Character(Character const &other);
	virtual ~Character();

	Character &operator=(Character const &other);

	std::string const &getName(void) const;

	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif