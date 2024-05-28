#include "ASpell.hpp"

// ASpell::ASpell() {}

// ASpell::ASpell(ASpell const &other) { *this = other;}

// ASpell &ASpell::operator=(ASpell const &other)
// {
//     this->name = other.name;
//     this->effects = other.effects;
//     return (*this);
// }
ASpell::ASpell(string const& n, string const& eff) : name(n), effects(eff){}

ASpell::~ASpell(){}

string const& ASpell::getName()const{return name;}

string const& ASpell::getEffects()const{return effects;}

void  ASpell::launch(ATarget const& target)const{
    target.getHitBySpell(*this);
}
