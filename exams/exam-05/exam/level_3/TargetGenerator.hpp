#pragma once
#include <map>
#include "ATarget.hpp"

class TargetGenerator
{
	private :
		TargetGenerator(TargetGenerator const & obj);
		TargetGenerator & operator=(TargetGenerator const & rhs);
		std::map < std::string, ATarget*> _target;
	public :
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType(ATarget* target);
		void forgetTargetType(std::string const & target);
		ATarget* createTarget(std::string const & target);
};
