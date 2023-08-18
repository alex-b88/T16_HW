
#ifndef T16_HW_ENIMAL_H
#define T16_HW_ENIMAL_H
#include "iostream"
#include "string"

using namespace std;

class Enimal {
protected:
    string name;
    bool type;

public:
    Enimal();
    Enimal(string name, bool type);
    virtual ~Enimal();

    void setName(string name);
    string getName()const;

    void setType(bool x);
    bool getType()const;

    virtual void show()const;
    virtual string getType1()const;



};


#endif //T16_HW_ENIMAL_H
