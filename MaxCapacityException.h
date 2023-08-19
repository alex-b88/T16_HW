
#ifndef T16_HW_MAXCAPACITYEXCEPTION_H
#define T16_HW_MAXCAPACITYEXCEPTION_H


#include "ZooException.h"

class MaxCapacityException : public ZooException {
public:
    void showMessage()const override{
        using namespace std;
        cout <<"Клетка заполнена!"<<endl;
    }
};


#endif //T16_HW_MAXCAPACITYEXCEPTION_H
