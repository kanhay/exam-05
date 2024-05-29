#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::~TargetGenerator(){}

void TargetGenerator::learnTargetType(ATarget* target){
    if (target)
        mymap[target->getType()] = target;
}

void TargetGenerator::forgetTargetType(string const &type){
    if (mymap.find(type) != mymap.end())
        mymap.erase(type);
}

ATarget* TargetGenerator::createTarget(string const &type){
    std::map<string, ATarget *>::iterator it = mymap.find(type);
    if (it != mymap.end())
        return it->second;
    return NULL;
}
