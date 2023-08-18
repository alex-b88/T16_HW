
#include "Beast.h"

Beast::Beast() {
    area="не задано";
}

Beast::Beast(string name, bool type, string area)
: Enimal(name,type)
{
    setArea(area);
}

Beast::~Beast() {

}

void Beast::setArea(string area) {
    if (area.size()>0)
        this->area=area;
}

string Beast::getArea() const {
    return area;
}

void Beast::show() const {
    cout <<"Зверь"<<endl;
    cout <<"Название: "<< name <<endl;
    cout <<"Хищник: ";
    if (type==true) cout <<"Да" <<endl;
    else cout <<"Нет" <<endl;
    cout <<"Среда обитания: " << area <<endl;
}

string Beast::getType1() const {
    return "Beast";
}
