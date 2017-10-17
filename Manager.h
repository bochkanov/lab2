#ifndef LAB2_MANAGER_H
#define LAB2_MANAGER_H

#include <string>
#include <vector>

#include "Employee.h"
#include "TeamLeader.h"
#include "Developer.h"

class TeamLeader;
class Developer;

class Manager : public Employee {
public:

    //Constructor
    Manager (std::string last_name_, std::string first_name_, std::string e_mail_,
             double hours_, double coeff_);

    //Getter
    std::vector<TeamLeader*> getTeamLeaders();

    //Other methods
    void SetTeamLeader (TeamLeader * new_team_leader);
    void UnsetTeamLeader (TeamLeader * prev_team_leader);

private:
    std::vector<TeamLeader *> team_leaders;
};


#endif //LAB2_MANAGER_H
