#include "TeamLeader.h"

#include <string>
#include <vector>

    //Constructor
    TeamLeader::TeamLeader (std::string last_name_, std::string first_name_, std::string e_mail_,
                            double hours_, double coeff_, Manager* manager_) :
                            manager(manager_),
                            Employee (last_name_, first_name_, e_mail_, hours_, coeff_) {};

    //Getters
    std::vector<Developer*> TeamLeader::getDevelopers() { return developers;}
    Manager* TeamLeader::getManager() { return manager;}

    //Other methods
    void TeamLeader::SetManager (Manager * new_manager) {
        if (new_manager != manager) {
            manager = new_manager;
            manager->SetTeamLeader(this);
        }
    }

    void TeamLeader::SetDeveloper (Developer * new_developer) {
        for (auto i : developers)
            if (i == new_developer)
                break;
        developers.push_back(new_developer);
        new_developer->SetTeamLeader(this);
    }

    void TeamLeader::UnsetDeveloper(Developer *prev_developer) {
        for (int i = 0; i < developers.size(); ++i){
            if(developers[i] == prev_developer) {
                developers.erase(developers.begin()+i);
            } else
                break;
        }
    }

    void TeamLeader::UnsetManager(Manager * prev_manager) {
        if (prev_manager == manager)
            manager = nullptr;
    }
