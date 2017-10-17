#ifndef LAB2_EMPLOYEE_H
#define LAB2_EMPLOYEE_H

#include <string>
#include "HR.h"
#include "Accounting.h"

class Employee : public HR, public Accounting {
public:

    Employee (std::string last_name_, std::string first_name_, std::string e_mail_,
              double hours_, double coeff_);

    //For Accounting
    //Setters
    virtual void setCoeff (double new_coeff);
    virtual void setHours (double new_hours);

    //Getters
    virtual double getHours();
    virtual double getCoeff();

    //Other methods
    virtual double calculateSalary ();


    //For HR
    //Setters
    virtual void setLastName (std::string last_name_);
    virtual void setFirstName (std::string first_name_);
    virtual void setEMail (std::string e_mail_);

    //Getters
    virtual std::string getLastName ();
    virtual std::string getFirstName ();
    virtual std::string getEMail ();


protected:
    std::string last_name;
    std::string first_name;
    std::string e_mail;
    double hours;
    double coeff;

};

#endif //LAB2_EMPLOYEE_H
