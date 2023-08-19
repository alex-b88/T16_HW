
#ifndef T16_HW_ZOOEXCEPTION_H
#define T16_HW_ZOOEXCEPTION_H
#include "iostream"
#include "string"

using std::string;

class ZooException {
protected:
    string enimal_name;

public:
    virtual string showMessage() =0;
    ZooException(string enimal_name);

};

class PredatorException : public ZooException{
public:
    PredatorException(string enimal_name);
    string showMessage() override;

};

class MaxCapacityException : public ZooException{
public:
    MaxCapacityException(string enimal_name);
    string showMessage() override;
};

#endif //T16_HW_ZOOEXCEPTION_H
