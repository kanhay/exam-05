#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

using std::string;
using std::cout;

class ATarget{
        string type;
    public:
        ATarget(string const& t);
        virtual ~ATarget();

        string const& getType()const;
        
        virtual ATarget *clone()const = 0;

        void getHitBySpell(ASpell const& spell)const;
};