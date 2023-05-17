#pragma once
#include "Point.hpp"
#include "Character.hpp"
#include <iostream>
namespace ariel{
    class Ninja : public Character
    {
        private:
            int speed;
        public:
            Ninja();
            Ninja(std::string name,Point& loc,int healthp);
            void move(Character *enemy);
            void slash(Character *enemy);

    };
    class OldNinja : public Ninja
    {
        public:
            OldNinja(std::string name,Point loc);
    };
    class YoungNinja : public Ninja
    {
        public:
            YoungNinja(std::string name,Point loc);
    };
    class TrainedNinja : public Ninja
    {
        public:
            TrainedNinja(std::string name,Point loc);
    };



}



