
#ifndef T16_HW_AVIARY_H
#define T16_HW_AVIARY_H
#include "vector"
#include "algorithm"
#include "Enimal.h"
#include "ZooException.h"

class Aviary {
protected:
    static int number;
    int max_capacity;
    int current_capacity;
    vector<Enimal*>enimals;
    bool isPredator;
public:
    Aviary();
    Aviary(int number, int max_capacity, int current_capacity);
    virtual ~Aviary();

    void setNumber(int x);
    int getNumber()const;

    void setMax_capacity(int x);
    int getMax_capacity()const;

    void setCurrent_capacity(int x);
    int getCurrent_capacity()const;

    void addItemToCage(Enimal* obj);
    void findItem();
    void delItemFromCage();
    void showAllfromTheCage()const;
};


#endif //T16_HW_AVIARY_H
