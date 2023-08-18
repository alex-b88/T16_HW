
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

    void setDepth(float depth);
    float getDepth()const;

    void show()const override;
    string getType1()const override;

};


#endif //T16_HW_FISH_H
