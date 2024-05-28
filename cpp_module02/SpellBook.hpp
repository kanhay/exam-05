#pragma once

#include <iostream>
#include "ASpell.hpp"
#include <map>

class ASpell;
using std::string;

class SpellBook{
    private:
    std::map<string, ASpell *> mymap;
    public:
    SpellBook();
    ~SpellBook();

    void learnSpell(ASpell*);
    void forgetSpell(string const &);
    ASpell* createSpell(string const &);
};