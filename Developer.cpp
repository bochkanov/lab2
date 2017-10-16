#include "Developer.h"
#include <string>

    //Constructor
    Developer::Developer (std::string last_name_, std::string first_name_, std::string e_mail_,
                          double hours_, double coeff_, TeamLeader* team_leader_) :
                          team_leader(team_leader_),
                          Employee (last_name_, first_name_, e_mail_, hours_, coeff_) {};

    //Getter
    TeamLeader* Developer::getTeamLeader () { return team_leader;}

    //Other methods
    void Developer::SetTeamLeader (TeamLeader * new_team_leader) {
        if (new_team_leader != team_leader) {
            team_leader = new_team_leader;
            team_leader->SetDeveloper(this);
        }
    }


