#include <iostream>
#include "Enimal.h"
#include "Fish.h"
#include "Bird.h"

int main() {
    Fish obj("Акула",1,500);
    obj.show();
    Enimal obj2("Кролик",0);
    Bird obj3("Сокол",1,310);
    obj2.show();
    obj3.show();

    return 0;
}
