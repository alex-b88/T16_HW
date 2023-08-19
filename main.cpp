#include <iostream>
#include "Enimal.h"
#include "Fish.h"
#include "Bird.h"
#include "Beast.h"
#include "Aviary.h"

int main() {
    Fish obj("Акула",1,500);
    Enimal rabbit("Кролик",0);
    Bird obj3("Сокол",1,310);
    Beast obj4;
    cout <<"==============\n";
    obj4.setName("Волк");
    obj4.setType(1);
    obj4.setArea("Лес");
    Aviary cage1;

    cage1.addItemToCage(new Enimal(rabbit));
    cage1.showAllfromTheCage();
    return 0;
}
