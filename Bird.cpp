
#include "Bird.h"

Bird::~Bird() {

}

Bird::Bird() {

}

Bird::Bird(string name, bool type, float fspeed)
: Enimal(name,type)
{
    setFspeed(fspeed);
}

void Bird::show() const {
    cout <<"Птица: "<< endl;
    cout <<"Название: "<< name <<endl;
    cout <<"Хищник: ";
    if (type==true) cout <<"Да" <<endl;
    else cout <<"Нет" <<endl;
    cout <<"Скорость полета: "<< fspeed<<endl;
}

string Bird::getType1() const {
    return "Bird";
}

void Bird::setFspeed(float fspeed) {
    if (fspeed>0)
        this->fspeed=fspeed;
}

float Bird::getFspeed() const {
    return fspeed;
}
