
#ifndef T16_HW_BEAST_H
#define T16_HW_BEAST_H


#include "Enimal.h"

class Beast : public Enimal {
protected:
    string area;
public:
    Beast();
    Beast(string name, bool type,string area);
    ~Beast() override;

    void setArea(string area);
    string getArea()const;

    virtual void show()const;
    virtual string getType1()const;

};


#endif //T16_HW_BEAST_H
