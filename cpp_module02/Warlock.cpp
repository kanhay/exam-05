#include "Warlock.hpp"

Warlock::Warlock(string const& n, string const& t):name(n), title(t){
    cout << name << ": This looks like another boring day.\n";
}

Warlock::~Warlock(){
    cout << name << ": My job here is done!\n";
}

string const& Warlock::getName()const{return name;}

string const& Warlock::getTitle()const{return title;}

void Warlock::setTitle(string const& t){title = t;}

void Warlock::introduce() const{
    cout << name << ": I am " << name << ", " << title << "!\n";
}

void Warlock::learnSpell(ASpell *spell){
        book.learnSpell(spell);
}

void Warlock::forgetSpell(string name){
    book.forgetSpell(name);
}

void Warlock::launchSpell(string name, ATarget const& target){
    book.createSpell(name)->launch(target);
}
