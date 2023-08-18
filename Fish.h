
#ifndef T16_HW_FISH_H
#define T16_HW_FISH_H


#include "Enimal.h"

class Fish : public Enimal {
protected:
    float depth;

public:
    Fish();
    Fish(string name, bool type, float depth);
    ~Fish() override;

    void setName(string name);
    string getName()const;

    void setType(bool x);
    bool getType()const;

    void show()const override;

};


#endif //T16_HW_FISH_H
