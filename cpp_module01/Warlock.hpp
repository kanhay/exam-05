#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>

class ATarget;
class ASpell;

using std::string;
using std::cout;

class Warlock{
        string name;
        string title;
        std::map<string, ASpell *> mymap;
    public:
        Warlock(string const& n, string const& t);
        ~Warlock();
        string const& getName()const;
        string const& getTitle()const;
        void setTitle(string const& t);
        void introduce() const;

        void learnSpell(ASpell *spell);
        void forgetSpell(string name);
        void launchSpell(string name, ATarget const& target);
};