#include "ATarget.hpp"

ATarget::ATarget(string const& t):type(t){}

ATarget::~ATarget(){}

string const& ATarget::getType()const{return type;}

void ATarget::getHitBySpell(ASpell const& spell)const{
    cout << type << " has been " << spell.getEffects() << "!\n";
}
