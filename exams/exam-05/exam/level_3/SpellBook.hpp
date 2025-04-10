#pragma once
#include <map>
#include "ASpell.hpp"

class SpellBook {
	private :
		SpellBook(SpellBook const & obj);
		SpellBook & operator=(SpellBook const & rhs);
		std::map < std::string, ASpell*> _SpellBook;
	public :
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell* spell);
		void forgetSpell(std::string const & SpellName);
		ASpell* createSpell(std::string const & SpellName);
};
