
#include "Fish.h"

Fish::Fish() {
    name="not set";
    type=false;
    depth=0;
}

Fish::~Fish() {

}

Fish::Fish(string name, bool type, float depth)
: Enimal(name,type)
{
        this->depth=depth;
}

void Fish::setName(string name) {
    if (name.length()>0)
    this->name=name;
}

string Fish::getName() const {
    return name;
}

void Fish::setType(bool x) {
    this->type=x;
}

bool Fish::getType() const {
    return type;
}

void Fish::show() const {
    cout <<"Рыба" << endl;
    cout <<"Глубина: " << depth << endl;
    Enimal::show();
}
