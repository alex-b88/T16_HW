
#ifndef T16_HW_BIRD_H
#define T16_HW_BIRD_H


#include "Enimal.h"

class Bird : public Enimal {
protected:
    float fspeed;
public:
    Bird();
    Bird(string name,bool type,float fspeed);
    ~Bird() override;

    void setFspeed(float fspeed);
    float getFspeed()const;

    void show()const override;
    string getType1()const override;

};


#endif //T16_HW_BIRD_H
