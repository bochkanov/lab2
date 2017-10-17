#ifndef LAB2_COMPANYSTAFF_H
#define LAB2_COMPANYSTAFF_H

#include "Manager.h"
#include "TeamLeader.h"
#include "Developer.h"

class CompanyStaff {
public:
    //for Developers
    void ChangeTeamLeader (TeamLeader* new_team_leader, Developer* developer);
    void CreateDeveloper (std::string last_name_, std::string first_name_, std::string e_mail_,
                          double hours_, double coeff_, TeamLeader* team_leader_);
    Developer* GetDeveloper (int developer_num);
    std::vector<Developer*> GetDevelopers ();
    void DismissDeveloper (Developer* prev_developer, TeamLeader* team_leader);


    //for TeamLeaders
    void ChangeManager (Manager* new_manager, TeamLeader* team_leader); // for Team Leaders
    void CreateTeamLeader (std::string last_name_, std::string first_name_, std::string e_mail_,
                           double hours_, double coeff_, Manager* manager_);
    TeamLeader* GetTeamLeader (int team_leader_num);
    std::vector<TeamLeader*> GetTeamLeaders ();
    void DismissTeamLeader (TeamLeader* prev_team_leader, Manager* manager); // for Managers

    //for Managers
    void CreateManager (std::string last_name_, std::string first_name_, std::string e_mail_,
                        double hours_, double coeff_);
    Manager* GetManager (int manager_num);
    std::vector<Manager*> GetManagers ();
    void DismissManager (Manager* prev_manager);

private:
    std::vector<Developer*> developers;
    std::vector<TeamLeader*> team_leaders;
    std::vector<Manager*> managers;
};


#endif //LAB2_COMPANYSTAFF_H
