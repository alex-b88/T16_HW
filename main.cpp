#include <iostream>
#include "Enimal.h"
#include "Fish.h"
#include "Bird.h"
#include "Beast.h"

int main() {
/*    Fish obj("Акула",1,500);
    obj.show();
    Enimal obj2("Кролик",0);
    Bird obj3("Сокол",1,310);
    obj2.show();
    obj3.show();*/
    Beast obj4;
    obj4.show();
    cout <<"==============\n";
    obj4.setName("Волк");
    obj4.setType(1);
    obj4.setArea("Лес");
    obj4.show();

    return 0;
}
