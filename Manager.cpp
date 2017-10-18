#include "Manager.h"

    //Constructor
    Manager::Manager (std::string last_name_, std::string first_name_, std::string e_mail_, double hours_, double coeff_) :
                      Employee (last_name_, first_name_, e_mail_, hours_, coeff_) {};

    //Getter
    std::vector<TeamLeader*> Manager::getTeamLeaders() { return team_leaders;}

    //Other methods
    void Manager::SetTeamLeader (TeamLeader * new_team_leader) {
        for (auto i : team_leaders)
            if (i == new_team_leader)
                break;
        team_leaders.push_back(new_team_leader);
        new_team_leader->SetManager(this);
    }

    void Manager::UnsetTeamLeader (TeamLeader * prev_team_leader) {
        for (int i = 0; i < team_leaders.size(); ++i) {
            if (team_leaders[i] == prev_team_leader) {
                team_leaders.erase(team_leaders.begin() + i);
            } else
                break;
        }
    }


