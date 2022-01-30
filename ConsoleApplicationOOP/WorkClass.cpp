#include "WorkClass.h"
void WorkClass::startWork() {
    std::cout << "Hello Привет World!\n";

    GoodBasic* universalPointer01 = new Freezer(2);
    static_cast<Freezer*>(universalPointer01)->toString();
    GoodBasic* universalPointer02 = new Freezer(2, 222);
    static_cast<Freezer*>(universalPointer02)->toString();
    GoodBasic* universalPointer03 = new Freezer(3, 3333, "NewName");
    static_cast<Freezer*>(universalPointer03)->toString();
    GoodBasic* universalPointer04 = new Freezer(4, 4444, "NewName", "Some description", 3);
    static_cast<Freezer*>(universalPointer04)->toString();
    GoodBasic* universalPointer05 = new Freezer(5, 55555, "NewName5", "Some description5", 5, 
        333, "white", "country", 3);
    static_cast<Freezer*>(universalPointer05)->toString();

    GoodBasic* universalPointer06 = new PC(2);
    static_cast<PC*>(universalPointer06)->toString();
    GoodBasic* universalPointer08 = new PC(3, 3333, "NewName");
    static_cast<PC*>(universalPointer08)->toString();
    GoodBasic* universalPointer09 = new PC(4, 4444, "NewName", "Some description");
    static_cast<PC*>(universalPointer09)->toString();
    GoodBasic* universalPointer10 = new PC(5, 55555, "NewName5", "Some description5", "Test CPU", "Test GPU", "Test Memory","Test Storage","TEST MB", "Test Case");
    static_cast<PC*>(universalPointer10)->toString();
}