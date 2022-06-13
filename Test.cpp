#include "doctest.h"
#include "sources/Leauge.hpp"
using namespace ariel;
TEST_CASE("Teams tests"){
    std::vector<Team*> myTeam;
    CHECK_THROWS(myTeam.push_back(new Team("",0)));
    CHECK_THROWS(myTeam.push_back(new Team(" ",0)));
        CHECK_NOTHROW(myTeam.push_back(new Team("Maccabi",1)));
    CHECK_NOTHROW(myTeam.push_back(new Team("Hapoel",0.3)));
    CHECK_NOTHROW(myTeam.push_back(new Team("Israel",0.5)));
    CHECK_NOTHROW(myTeam.push_back(new Team("Holon",0.6)));
    CHECK_NOTHROW(myTeam.push_back(new Team("FCB",0.002)));
    CHECK_NOTHROW(myTeam.push_back(new Team("Real Madrid",0.01)));


}
TEST_CASE("Test Leauge"){
    vector<Team*> myTeams;
    myTeams.push_back(new Team("Maccabi Haifa", 1));
    myTeams.push_back(new Team("Maccabi Tel Aviv", 0.2));
    myTeams.push_back(new Team("Hapoel Tel Aviv", 0.2));
    myTeams.push_back(new Team("Maccabi Peath Tiqua", 0.7));
    myTeams.push_back(new Team("Beitar Jerusalem", 0.8));
    myTeams.push_back(new Team("Hapoel Hadera", 0.1));
    myTeams.push_back(new Team("SC Ashdod", 0.2));
    myTeams.push_back(new Team("Hapoel Jerusalem", 0.9));
    myTeams.push_back(new Team("Hapoel Haifa", 0.1));
    myTeams.push_back(new Team("Ironi Qryat Shmona", 1));
    myTeams.push_back(new Team("Bni Yeuda", 0.8));
    Leauge* my_league = new Leauge(myTeams);
    CHECK_THROWS(l->printLeauge(5));
    l->startLeauge();
    CHECK_NOTHROW(l->printLeauge(5));
}