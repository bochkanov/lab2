#ifndef LAB2_HR_H
#define LAB2_HR_H

#include <string>

class HR{
public:

    virtual std::string getLastName () = 0;
    virtual std::string getFirstName () = 0;
    virtual std::string getEMail () = 0;

    virtual void setLastName (std::string) = 0;
    virtual void setFirstName (std::string) = 0;
    virtual void setEMail (std::string) = 0;

};

#endif //LAB2_HR_H
