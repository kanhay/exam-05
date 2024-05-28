#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook::~SpellBook(){}

void SpellBook::learnSpell(ASpell* spell){
    mymap[spell->getName()] = spell;
}

void SpellBook::forgetSpell(string const &name){
    mymap.erase(name);
}

ASpell* SpellBook::createSpell(string const &name){
    std::map<string, ASpell *>::iterator it = mymap.find(name);
    if (it != mymap.end())
        return it->second;
    return NULL;
}

