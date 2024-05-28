#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;
using std::string;
using std::cout;

class ASpell{
    protected:
        string name;
        string effects;
    public:
        ASpell(string const& n, string const& eff);
        virtual ~ASpell();
        
        string const& getName()const;
        string const& getEffects()const;
        virtual ASpell *clone()const = 0;
        void launch(ATarget const& target)const;
};