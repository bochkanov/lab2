#ifndef LAB2_DEVELOPER_H
#define LAB2_DEVELOPER_H

#include <string>

#include "Manager.h"
#include "TeamLeader.h"

class Manager;
class TeamLeader;

class Developer : public Employee {
public:

    //Constructor
    Developer (std::string last_name_, std::string first_name_, std::string e_mail_,
               double hours_, double coeff_, TeamLeader* team_leader_);

    //Getter
    TeamLeader* getTeamLeader ();

    //Other methods
    void SetTeamLeader (TeamLeader * new_team_leader);
    void UpsetTeamLeader (TeamLeader * old_team_leader);

private:
    TeamLeader* team_leader;
};


#endif //LAB2_DEVELOPER_H
