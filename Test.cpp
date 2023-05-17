#include "doctest.h"
#include "sources/Team.hpp"

using namespace ariel;
using namespace std;

TEST_CASE("point class"){
    Point a(1,1);
    Point b(2,2);
    Point c(1,2);
    Point d(-5,7);
    Point e(0,0);
    CHECK_EQ(c.getx(),1);
    CHECK_EQ(c.gety(),2);
    CHECK_EQ(a.distance(b),b.distance(a));
    CHECK_EQ(d.distance(e),e.distance(d));
    CHECK_NE(d.distance(e),a.distance(d));
    CHECK_THROWS(Point());
    CHECK_NOTHROW(a.moveTowards(a,b,2));
    CHECK_THROWS(a.moveTowards(a,b,-5));
}
TEST_CASE("cowboy"){
    Cowboy yoyo{"yoyo",Point(0,0)};
    CHECK_EQ(yoyo.getName(),"yoyo");
    CHECK_EQ(yoyo.getLocation().getx(),0);
    CHECK_EQ(yoyo.getLocation().getx(),0);
    CHECK(yoyo.hasboolets());
    CHECK(yoyo.isAlive());
    CHECK_EQ(yoyo.get_hp(),110);
    CHECK_EQ(yoyo.getLocation().distance(Point{0,0}), 0);
    CHECK_NE(yoyo.getLocation().distance(Point(5,5)), 0);
}
TEST_CASE("Ninjot init"){
    Cowboy yoyo{"yoyo",Point(0,0)};
    OldNinja old("old",Point(1,2));
    YoungNinja young("young",Point(-1,3));
    TrainedNinja *trained = new TrainedNinja("trained",Point(0,-5));
    CHECK_EQ(old.get_hp(),150);
    CHECK_EQ(old.getName(),"old");
    CHECK_EQ(young.get_hp(),100);
    CHECK_EQ(young.getName(),"young");
    CHECK_EQ(trained->get_hp(),120);
    CHECK_EQ(trained->getName(),"trained");
    CHECK(old.isAlive());
    CHECK(young.isAlive());
    CHECK(trained->isAlive());
    yoyo.shoot(trained);
    CHECK_EQ(trained->get_hp(),110);
}
TEST_CASE("Team init"){
    TrainedNinja *trained = new TrainedNinja("trained",Point(0,-5));
    Cowboy *tom = new Cowboy("Tom", Point(0,0));
    Team team{tom};

    CHECK_EQ(team.getsize(),2);
    for(int i = 0;i < 10;i++){
        if(team.getsize()<10)
            CHECK_NOTHROW(team.add(trained));
        else
            CHECK_THROWS(team.add(trained));
    }
}