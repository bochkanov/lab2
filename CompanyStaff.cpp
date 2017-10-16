#include "CompanyStaff.h"

void CompanyStaff::ChangeTeamLeader(TeamLeader *new_team_leader, Developer *developer) {
    for (auto i : team_leaders) {
        if(i == team_leader){
            i->SetDeveloper(new_developer);
            break;
        }
    }

}

void CompanyStaff::ChangeManager(Manager *new_manager, TeamLeader *team_leader) {
    for (auto i : team_leaders) {
        if(i == team_leader){
            i->SetManager(new_manager);
            break;
        }
    }
}

void CompanyStaff::DismissDeveloper(Developer *prev_developer, TeamLeader *team_leader) {
    for (auto i : developers){
        if(i == prev_developer) {
            developers.erase(this);
            team_leader->UnsetDeveloper(prev_developer);
            break;
        }
    }
}

void CompanyStaff::DismissTeamLeader(TeamLeader *prev_team_leader, Manager *manager) {
    for (auto i : team_leaders){
        if(i == prev_team_leader) {
            team_leaders.erase(this);
            manager->UnsetTeamLeader(prev_team_leader);
            break;
        }
    }
}

