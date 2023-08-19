
#include "Aviary.h"

Aviary::Aviary() {
    number+=number;
    current_capacity=0;
    max_capacity=5;
    isPreditor=false;
}

Aviary::Aviary(int number, int max_capacity, int current_capacity) {
    setNumber(number);
    setCurrent_capacity(current_capacity);
    setMax_capacity(max_capacity);
}

Aviary::~Aviary() {
    for (int i = 0; i < enimals.size(); ++i) {
        delete enimals[i];
    }
}

void Aviary::setNumber(int x) {
    if (x>number)
        this->number=x;
}

int Aviary::getNumber() const {
    return number;
}

void Aviary::setMax_capacity(int x) {
    if (x>0)
        this->max_capacity=x;
}

int Aviary::getMax_capacity() const {
    return max_capacity;
}

void Aviary::setCurrent_capacity(int x) {
    if (x>0)
        this->current_capacity=x;
}

int Aviary::getCurrent_capacity() const {
    return current_capacity;
}

void Aviary::addItemToCage(Enimal *obj) {
    enimals.push_back(obj);
    current_capacity+=1;
}

void Aviary::findItem() {
    if (current_capacity==0)
    {
        cout <<"Клетка пустая"<<endl;
        return;
    }
    string tmp;
    bool flag=false;
    cout <<"Введите название животного: ";
    getline(cin,tmp);
    for (int i = 0; i <enimals.size(); ++i) {
        if (enimals[i]->getName()==tmp)
            enimals[i]->show();
        flag=true;
    }
    if (!flag) cout <<"Такого животного нету в этой клетке"<<endl;
}

void Aviary::delItemFromCage() {
    if (current_capacity==0)
    {
        cout <<"Клетка пустая"<<endl;
        return;
    }
    string tmp;
    cout <<"Введите название животного: ";
    getline(cin,tmp);
    for (int i = 0; i <enimals.size(); ++i) {
        if (enimals[i]->getName()==tmp)
        {
            delete enimals[i];
            enimals.erase(enimals.begin() + i);
            current_capacity-=1;
        }
    }

}

void Aviary::showAllfromTheCage() const {
    if (current_capacity==0)
    {
        cout <<"Клетка пустая"<<endl;
        return;
    }
    cout <<"Вольера №" << number <<". Список животных:"<<endl;
    for (int i = 0; i < enimals.size(); ++i) {
        enimals[i]->show();
    }

}
