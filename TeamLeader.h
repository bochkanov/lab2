#ifndef LAB2_TEAMLEADER_H
#define LAB2_TEAMLEADER_H

#include <string>
#include <vector>

#include "Manager.h"
#include "Developer.h"

class Manager;
class Developer;

class TeamLeader : public Employee {
public:

    //Constructor
    TeamLeader (std::string last_name_, std::string first_name_, std::string e_mail_,
                double hours_, double coeff_, Manager* manager_);

    //Getters
    std::vector<Developer*> getDevelopers();
    Manager* getManager();

    //Other methods
    void SetManager (Manager * new_manager);
    void SetDeveloper (Developer * new_developer);

    void UnsetDeveloper (Developer * prev_developer);

private:
    std::vector<Developer*> developers;
    Manager* manager;
};



#endif //LAB2_TEAMLEADER_H
