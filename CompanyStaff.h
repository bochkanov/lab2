#ifndef LAB2_COMPANYSTAFF_H
#define LAB2_COMPANYSTAFF_H

#include "Manager.h"
#include "TeamLeader.h"
#include "Developer.h"

class CompanyStaff {
public:
    void ChangeTeamLeader (TeamLeader* new_team_leader, Developer* developer); //for Developers
    void ChangeManager (Manager* new_manager, TeamLeader* team_leader); // for Team Leaders
    void DismissTeamLeader (TeamLeader* prev_team_leader, Manager* manager); // for Managers
    void DismissDeveloper (Developer* prev_developer, TeamLeader* team_leader); // for Team Leaders

private:
    std::vector<Developer*> developers;
    std::vector<TeamLeader*> team_leaders;
    std::vector<Manager*> managers;
};


#endif //LAB2_COMPANYSTAFF_H
