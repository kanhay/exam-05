#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook::~SpellBook(){}

void SpellBook::learnSpell(ASpell* spell){
    if (spell)
        mymap[spell->getName()] = spell;
}

void SpellBook::forgetSpell(string const &name){
    if (mymap.find(name) != mymap.end())
        mymap.erase(name);
}

ASpell* SpellBook::createSpell(string const &name){
    std::map<string, ASpell *>::iterator it = mymap.find(name);
    if (it != mymap.end())
        return it->second;
    return NULL;
}

