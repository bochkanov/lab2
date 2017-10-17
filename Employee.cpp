#include "Employee.h"

    Employee::Employee (std::string last_name_ , std::string first_name_, std::string e_mail_,
                        double hours_, double coeff_) :
                        last_name(last_name_), first_name(first_name_), e_mail(e_mail_),
                        hours(hours_), coeff(coeff_) {};


    //For Accounting
    //Setters
    void Employee::setCoeff (double new_coeff) { coeff = new_coeff;}
    void Employee::setHours (double new_hours) { hours = new_hours;}

    //Getters
    double Employee::getHours() { return hours;}
    double Employee::getCoeff() { return coeff;}

    //Other methods
    double Employee::calculateSalary () { return hours*coeff; }


    //For HR
    //Setters
    void Employee::setLastName (std::string last_name_) { last_name = last_name_;}
    void Employee::setFirstName (std::string first_name_) { first_name = first_name_;}
    void Employee::setEMail (std::string e_mail_) { e_mail = e_mail_;}

    //Getters
    std::string Employee::getLastName () { return last_name;}
    std::string Employee::getFirstName () { return first_name;}
    std::string Employee::getEMail () { return e_mail;}



