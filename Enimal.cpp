#include "Enimal.h"
#include "Fish.h"

Enimal::Enimal() {
    name = "не задано";
    type = false;
}

Enimal::Enimal(string name, bool type) {
    setName(name);
    setType(type);
}

Enimal::~Enimal() {

}

void Enimal::setName(string name) {

    this->name=name;
}

string Enimal::getName() const {
    return name;
}

void Enimal::setType(bool x) {
    this->type=x;
}

bool Enimal::getType() const {
    return type;
}

void Enimal::show() const {
    cout <<"Животное"<<endl;
    cout <<"Название: "<< name <<endl;
    cout <<"Хищник: ";
    if (type==true) cout <<"Да" <<endl;
    else cout <<"Нет" <<endl;
}

string Enimal::getType1() const {
    return "Enimal";
}

