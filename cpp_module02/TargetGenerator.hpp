#pragma once

#include "ATarget.hpp"
#include <map>

class ATarget;
using std::string;

class TargetGenerator{
    private:
        std::map<string, ATarget *> mymap;
    public:
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget*);
        void forgetTargetType(string const &);
        ATarget* createTarget(string const &);
};