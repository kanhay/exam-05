#include "ATarget.hpp"

ATarget::ATarget(){}

ATarget::ATarget(ATarget const& ob){
    *this = ob;
}

ATarget &ATarget::operator=(ATarget const& ob){
    type = ob.getType();
    return *this;
}

ATarget::ATarget(string const& t):type(t){}

ATarget::~ATarget(){}

string const& ATarget::getType()const{return type;}

void ATarget::getHitBySpell(ASpell const& spell)const{
    cout << type << " has been " << spell.getEffects() << "!\n";
}
