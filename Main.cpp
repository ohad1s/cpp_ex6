#include <stdexcept>
using namespace std;

#include "sources/Leauge.hpp"
int const MAXTEAM = 20;
using namespace ariel;

int main() {
    vector<Team*> myTeams;
    myTeams.push_back(new Team("Maccabi Haifa", 1));
    myTeams.push_back(new Team("Maccabi Tel Aviv", 0.2));
    myTeams.push_back(new Team("Hapoel Tel Aviv", 0.2));
    myTeams.push_back(new Team("Maccabi Peath Tiqua", 0.7));
    myTeams.push_back(new Team("Beitar Jerusalem", 0.1));
    myTeams.push_back(new Team("Hapoel Hadera", 0.1));
    myTeams.push_back(new Team("SC Ashdod", 0.2));
    myTeams.push_back(new Team("Hapoel Jerusalem", 0.19));
    myTeams.push_back(new Team("Hapoel Haifa", 0.17));
    myTeams.push_back(new Team("Ironi Qryat Shmona", 0.51));
    myTeams.push_back(new Team("Bni Yeuda", 0.28));
    myTeams.push_back(new Team("Maccabi Netanya", 0.81));
    myTeams.push_back(new Team("Seqzia Nes Ziona", 0.11));
    myTeams.push_back(new Team("Hapoel Beer Sheva", 0.12));
    myTeams.push_back(new Team("Hapoel Petah Tiqua", 0.3));
    myTeams.push_back(new Team("Hapoel Nof Hagalil", 0.002));
    myTeams.push_back(new Team("Hapoel Acre", 0.01));
    myTeams.push_back(new Team("Hapel Afula", 0.1));
    myTeams.push_back(new Team("Hapel Ramat Gan", 0.2));
    myTeams.push_back(new Team("Hapel Marmorek", 0.2));
    Leauge* l = new Leauge(myTeams);
    l->startLeauge();
    l->printLeauge(20);
    for (int i = MAXTEAM -1; i >= 0; --i) {
        delete myTeams.at((unsigned int)i);
    }

}