#include <iostream>
#include "Employee.h"
#include "Developer.h"
#include "CompanyStaff.h"


int main() {

    CompanyStaff company;

    company.CreateManager("Petr","Ivanov","****",20,1.5);
    company.CreateManager("Alex","Sorokin","**",30,1.2);

    std::vector<Manager*> manager_list = company.GetManagers();

    company.CreateTeamLeader("Max","Alkin","******",27,1.3,manager_list[1]);
    company.CreateTeamLeader("Sasha","Pupkin","*****",27,1.3,manager_list[1]);
    company.CreateTeamLeader("John","Smiths","********",27,1.3,manager_list[0]);
    company.CreateTeamLeader("Max","Muller","**********",27,1.3,manager_list[1]);

    std::vector<TeamLeader*> team_leader_list = company.GetTeamLeaders();

    std::string checkTL = team_leader_list[1]->getLastName();
    std::string checkM = team_leader_list[1]->getManager()->getLastName();
    std::cout << checkTL << " " << checkM << std::endl;

    company.ChangeManager(manager_list[0],team_leader_list[1]);

    checkTL = team_leader_list[1]->getLastName();
    checkM = team_leader_list[1]->getManager()->getLastName();
    std::cout << checkTL << " " << checkM << std::endl;



    return 0;
}