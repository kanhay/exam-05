#include "ATarget.hpp"

// ATarget::ATarget() {}

// ATarget::ATarget(ATarget const &other) { *this = other;}

// ATarget &ATarget::operator=(ATarget const &other)
// {
//     this->type = other.type;
//     return (*this);
// }

ATarget::ATarget(string const& t) : type(t){}

ATarget::~ATarget(){}

string const& ATarget::getType()const{return type;}

void ATarget::getHitBySpell(ASpell const& spell)const{
    cout << type << " has been " << spell.getEffects() << "!\n";
}
