#include "Ninja.hpp"

using namespace ariel;
using namespace std;

Ninja::Ninja(){}
Ninja::Ninja(string name,Point& loc,int healthp){
    Character(name,loc,healthp);
}
void Ninja::move(Character *enemy){}
void Ninja::slash(Character *enemy){}

OldNinja::OldNinja(std::string name,Point loc){
    Ninja(name,loc,150);
}
YoungNinja::YoungNinja(std::string name,Point loc){
    Ninja(name,loc,100);
}
TrainedNinja::TrainedNinja(string name,Point loc){
    Ninja(name,loc,120);
}