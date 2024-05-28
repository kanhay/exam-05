#pragma once

#include <iostream>

using std::string;
using std::cout;

class Warlock{
        string name;
        string title;
    public:
        Warlock(string const& n, string const& t);
        ~Warlock();
        string const& getName()const;
        string const& getTitle()const;
        void setTitle(string const& t);
        void introduce() const;
};