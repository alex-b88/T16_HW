
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
    setDepth(depth);
}

void Fish::show() const {
    cout <<"Рыба" << endl;
    cout <<"Название: "<< name <<endl;
    cout <<"Хищник: ";
    if (type==true) cout <<"Да" <<endl;
    else cout <<"Нет" <<endl;
    cout <<"Глубина: " << depth <<"м" <<endl;
}

string Fish::getType1() const {
    return "Fish";
}

void Fish::setDepth(float depth) {
    if (depth>0)
        this->depth=depth;
}

float Fish::getDepth() const {
    return depth;
}
