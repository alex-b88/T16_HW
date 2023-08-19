
#include "ZooException.h"

ZooException::ZooException(string enimal_name)
:enimal_name(enimal_name) {}

PredatorException::PredatorException(string enimal_name)
    :ZooException(enimal_name) {}

string PredatorException::showMessage() {
    return "Predator Exception: " + enimal_name;
}

MaxCapacityException::MaxCapacityException(string enimal_name)
: ZooException(enimal_name) {}

string MaxCapacityException::showMessage() {
    return "Max Capacity" + enimal_name;
}
