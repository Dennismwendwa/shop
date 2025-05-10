#include <iostream>
#include "classes.hpp"


int main() {

    InventoryManager inventory;

    inventory.add_product("Bread", "BRD123", 4000, 100, true, 5);
    inventory.add_product("Tea", "TEA456", 7000, 200, true, 2);
    inventory.add_product("Coffee", "COF789", 6500, 70);
    inventory.add_product("Table", "TBL111", 10000, 20);
    inventory.add_product("Chair", "CHR222", 6700, 30);
    inventory.add_product("TV", "BRD989", 50000, 50, true, 10);
    inventory.add_product("BlueBand", "BRD999", 5000, 50);
    inventory.add_product("DVD", "BRD979", 7600, 40);
    inventory.add_product("Cooking Stove", "CSD699", 6700, 77, true, 7);
    inventory.add_product("Soda", "SD799", 100, 400);

    inventory.display_all_products();

    
    return 0;
}