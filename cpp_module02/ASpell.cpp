#include "ASpell.hpp"


ASpell::ASpell(){}

ASpell::ASpell(ASpell const& ob){
    *this = ob;
}

ASpell &ASpell::operator=(ASpell const& ob){
    name = ob.getName();
    effects = ob.getEffects();
    return *this;
}

ASpell::ASpell(string const& n, string const& eff):name(n), effects(eff){}

ASpell::~ASpell(){}

string const& ASpell::getName()const{return name;}

string const& ASpell::getEffects()const{return effects;}

void  ASpell::launch(ATarget const& target)const{
    target.getHitBySpell(*this);
}
