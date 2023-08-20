
#include "ZooException.h"

ZooException::ZooException(string enimal_name)
:enimal_name(enimal_name) {}

PredatorException::PredatorException(string enimal_name)
    :ZooException(enimal_name) {}

string PredatorException::showMessage() {
    return "Внимание! Хищник!";
}

MaxCapacityException::MaxCapacityException(string enimal_name)
: ZooException(enimal_name) {}

string MaxCapacityException::showMessage() {
    return "Невозможно добавить " + enimal_name + ". Клетка заполнена\n";
}

NameExeption::NameExeption(string notice)
: ZooException(notice) {}

string NameExeption::showMessage() {
    return "Невозможно создать животное! Не указано имя\n";
}
