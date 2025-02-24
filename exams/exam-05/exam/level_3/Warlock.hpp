#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock {
	private :
		std::string _name;
		std::string _title;
		Warlock();
		Warlock(Warlock const & obj);
		Warlock & operator=(Warlock const & rhs);
		SpellBook _SpellBook;
	public :
		Warlock(std::string const &name, std::string const &title);
		~Warlock();

		std::string const & getName() const;
		std::string const & getTitle() const;
		void setTitle(std::string const & str);
		void introduce() const;
		void learnSpell(ASpell* spell);
		void forgetSpell(std::string SpellName);
		void launchSpell(std::string SpellName, ATarget const & target);
};