#ifndef LAB2_ACCOUNTING_H
#define LAB2_ACCOUNTING_H

class Accounting{
public:

    virtual double getHours () = 0;
    virtual double getCoeff () = 0;

    virtual void setCoeff (double) = 0;
    virtual void setHours (double) = 0;

    virtual double calculateSalary (double, double) = 0;

};


#endif //LAB2_ACCOUNTING_H
