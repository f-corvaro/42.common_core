#include "SpellBook.hpp"

SpellBook::SpellBook(SpellBook const & obj){
	*this = obj;
}

SpellBook & SpellBook::operator=(SpellBook const & rhs){
	_SpellBook = rhs._SpellBook;
	return (*this);
}

SpellBook::SpellBook(){}

SpellBook::~SpellBook(){}

void SpellBook::learnSpell(ASpell* spell){
	if (spell)
		_SpellBook[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(std::string const & SpellName){
	if (_SpellBook.find(SpellName) != _SpellBook.end())
		_SpellBook.erase(_SpellBook.find(SpellName));
}

ASpell* SpellBook::createSpell(std::string const & SpellName){
	ASpell* tmp = NULL;
	if (_SpellBook.find(SpellName) != _SpellBook.end())
		tmp = _SpellBook[SpellName];
	return (tmp);
}
