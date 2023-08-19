
#ifndef T16_HW_PREDATOREXCEPTION_H
#define T16_HW_PREDATOREXCEPTION_H


#include "ZooException.h"

class PredatorException : public ZooException {

public:
    void showMessage()const override {
        using namespace std;
        cout <<"Внимание! Хищник! Невозможно добавить"<<endl;
    }
};


#endif //T16_HW_PREDATOREXCEPTION_H
