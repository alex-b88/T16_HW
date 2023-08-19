#include <iostream>
#include "Enimal.h"
#include "Fish.h"
#include "Bird.h"
#include "Beast.h"
#include "Aviary.h"

int main() {
    Fish shark("Акула",1,500);
    Enimal rabbit("Кролик",0);
    Enimal pig("Свинья",0);
    Bird sinica("Синичка",0,25);
    Bird sokol("Сокол",1,310);
    Beast obj4;
    cout <<"==============\n";
    obj4.setName("Волк");
    obj4.setType(1);
    obj4.setArea("Лес");
    Aviary cage1;


 //  cage1.addItemToCage(new Bird(sokol));
    cage1.addItemToCage(new Enimal(rabbit));
    cage1.addItemToCage(new Enimal(pig));
 //   cage1.addItemToCage(new Fish(shark));
    cage1.addItemToCage(new Bird(sinica));
    cage1.showAllfromTheCage();

    cage1.addItemToCage(new Enimal(rabbit));
    cage1.showAllfromTheCage();
    return 0;
}
