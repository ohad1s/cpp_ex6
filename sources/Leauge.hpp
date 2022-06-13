
#pragma once
#include <iostream>
#include <vector>
#include "Schedule.hpp"
#include "Team.hpp"
#include "Game.hpp"

using namespace std;


namespace ariel {

    class Leauge {
    public:
        vector<Team*> allTeams;
        bool leaugeEnd;

        Leauge();
        Leauge(vector<Team*> teams);

        ~Leauge();

        void startLeauge();

        void fixLeauge();

        void printLeauge(int limit);
    };
}