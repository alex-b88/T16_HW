
#include "Aviary.h"

Aviary::Aviary() {
    number++;
    current_capacity=0;
    max_capacity=5;
    isPredator=false;
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
    if (current_capacity == max_capacity)
        throw new MaxCapacityException(obj->getName());
    //если клетка пустая
    else if (current_capacity == 0) {
        enimals.push_back(obj);
        current_capacity += 1;
        if (obj->getType())
            isPredator = true;
    }
    //если в клетке кто-то есть
    else if (current_capacity > 0 && current_capacity < max_capacity) {
            //если в клетке нет хищника и добавляем не хищника
            if(!(isPredator) && !(obj->getType())) {
                enimals.push_back(obj);
                current_capacity += 1;
            }
            //если в клетке нет хищника и добавляем хищника или есть хищник и добавляем не хищника
            else if((!(isPredator) && obj->getType()) || (isPredator && !(obj->getType())) ){
                throw new PredatorException(obj->getName());
            }
            //если в клетке есть хищник и добавляем хищника
            else if(isPredator && obj->getType()){
                enimals.push_back(obj);
                current_capacity += 1;
            }
    }

    else if (current_capacity > 0 && current_capacity < max_capacity && isPredator && obj->getType()){
        enimals.push_back(obj);
        current_capacity += 1;

    }
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
        if (enimals[i]->getName()==tmp){
            enimals[i]->show();
        flag=true;
        }
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
    bool flag = false;
    cout <<"Введите название животного: ";
    getline(cin,tmp);
    for (int i = 0; i <enimals.size(); ++i) {
        if (enimals[i]->getName()==tmp)
        {
            cout <<enimals[i]->getName()<<" успешно удалена из клетки!"<< endl;
            delete enimals[i];
            enimals.erase(enimals.begin() + i);
            current_capacity-=1;
            flag=true;
        }
    }
    if (!flag) cout <<"Такого животного в этой клетке нету!" << endl;
}

void Aviary::showAllfromTheCage() const {
    if (current_capacity==0)
    {
        cout <<"Клетка пустая"<<endl;
        return;
    }
    cout <<"Вольер №" << number <<". Список животных:"<<endl;
    for (int i = 0; i < enimals.size(); ++i) {
        enimals[i]->show();
    }

}
