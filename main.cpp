#include <iostream>
#include "Enimal.h"
#include "Fish.h"
#include "Bird.h"
#include "Beast.h"
#include "Aviary.h"

int Aviary::number=0; //статичечкий член класса для порядкого номера вольера

int main() {
    Beast fox("Лиса",1,"Лес");
    Beast wolf("Волк",1,"Лес");
    Beast rabbit("Заяц",0, "Везде");
    Enimal panda("Панда",0);
    Enimal turtle("Черепаха", 0);
    Bird sinica("Синица",0,25);

    Aviary cage1;
    cage1.setMax_capacity(3);
    try{
    cage1.addItemToCage(new Beast(rabbit));
    cage1.addItemToCage(new Enimal(panda));
    cage1.addItemToCage(new Enimal(turtle));
    cage1.addItemToCage(new Bird(sinica));
    }
    catch (MaxCapacityException* err)
    {
        cout << err->showMessage();
    }
    cout <<"======================\n";
    cage1.showAllfromTheCage();

    Aviary cage2;
    try{
        cage2.addItemToCage(new Enimal(panda));
        cage2.addItemToCage(new Enimal(turtle));
        cage2.addItemToCage(new Beast(fox));
    }
    catch (PredatorException* err)
    {
        cout << err->showMessage()<<endl;
    }
    cout <<"======================\n";
    cage2.showAllfromTheCage();
    cout << endl;
    try{
     cage1.addItemToCage(new Bird("",0, 25));
    }
    catch (NameExeption* err)
    {
        cout << err->showMessage()<< endl;
    }
    return 0;
}
