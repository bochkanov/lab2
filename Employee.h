#ifndef LAB2_EMPLOYEE_H
#define LAB2_EMPLOYEE_H

#include <string>

class Employee : public Accounting, public HR {
public:

    Employee (std::string last_name_, std::string first_name_, std::string e_mail_,
              double hours_, double coeff_);

    //For Accounting
    //Setters
    void setCoeff (double new_coeff);
    void setHours (double new_hours);

    //Getters
    double getHours();
    double getCoeff();

    //Other methods
    double calculateSalary (double hours, double coeff);


    //For HR
    //Setters
    void setLastName (std::string last_name_);
    void setFirstName (std::string first_name_);
    void setEMail (std::string e_mail_);

    //Getters
    std::string getLastName ();
    std::string getFirstName ();
    std::string getEMail ();


protected:
    std::string last_name;
    std::string first_name;
    std::string e_mail;
    double hours;
    double coeff;

};

#endif //LAB2_EMPLOYEE_H
