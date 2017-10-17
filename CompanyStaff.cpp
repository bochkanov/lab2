#include "CompanyStaff.h"

//For Developers
void CompanyStaff::ChangeTeamLeader(TeamLeader *new_team_leader, Developer *developer) {
    for (auto i : developers) {
        if(i == developer){
            i->SetTeamLeader(new_team_leader);
            break;
        }
    }
}

void CompanyStaff::CreateDeveloper(std::string last_name_, std::string first_name_, std::string e_mail_,
                                   double hours_, double coeff_, TeamLeader* team_leader_) {
    Developer* new_developer = new Developer (last_name_, first_name_, e_mail_, hours_, coeff_, team_leader_);
    developers.push_back(new_developer);
    team_leader_->SetDeveloper(new_developer);
}

Developer* CompanyStaff::GetDeveloper(int developer_num) { return developers[developer_num];}

std::vector<Developer*> CompanyStaff::GetDevelopers() { return developers;}

void CompanyStaff::DismissDeveloper(Developer* prev_developer, TeamLeader* team_leader) {
    for (int i = 0; i < developers.size(); ++i){
        if(developers[i] == prev_developer) {
            developers.erase(developers.begin()+i);
            team_leader->UnsetDeveloper(prev_developer);
        }
    }
}


//For TeamLeaders
void CompanyStaff::ChangeManager(Manager *new_manager, TeamLeader *team_leader) {
    for (auto i : team_leaders) {
        if(i == team_leader){
            i->SetManager(new_manager);
        }
    }
}

void CompanyStaff::CreateTeamLeader(std::string last_name_, std::string first_name_, std::string e_mail_,
                                    double hours_, double coeff_, Manager *manager_) {
    TeamLeader* new_team_leader = new TeamLeader (last_name_, first_name_, e_mail_, hours_, coeff_, manager_);
    team_leaders.push_back(new_team_leader);
    manager_->SetTeamLeader(new_team_leader);
}

TeamLeader* CompanyStaff::GetTeamLeader(int team_leader_num) { return team_leaders[team_leader_num];}

std::vector<TeamLeader*> CompanyStaff::GetTeamLeaders() { return team_leaders;}

void CompanyStaff::DismissTeamLeader(TeamLeader* prev_team_leader, Manager* manager) {
    for (int i = 0; i < team_leaders.size(); ++i){
        if(team_leaders[i] == prev_team_leader) {
            team_leaders.erase(team_leaders.begin()+i);
            manager->UnsetTeamLeader(prev_team_leader);
        }
    }
}


//For Managers

void CompanyStaff::CreateManager(std::string last_name_, std::string first_name_, std::string e_mail_,
                                 double hours_, double coeff_) {
    Manager* new_manager = new Manager (last_name_, first_name_, e_mail_, hours_, coeff_);
    managers.push_back(new_manager);
}

Manager* CompanyStaff::GetManager(int manager_num) { return managers[manager_num];}

std::vector<Manager*> CompanyStaff::GetManagers() { return managers;}

void CompanyStaff::DismissManager(Manager* prev_manager) {
    for (int i = 0; i < managers.size(); ++i) {
        if (managers[i] == prev_manager)
            managers.erase(managers.begin()+i);
    }
}

