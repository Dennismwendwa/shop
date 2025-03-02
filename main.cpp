#include <iostream>
#include "classes.hpp"


int main() {

    std::cout << "starting new project" << std::endl;
    Product* product[6];

    product[0] = new Product("bread", "#uyreljk567ljf", 4000, 100, true, 5);
    product[1] = new Product("Tea leaves", "#urkflg567ljf", 7000, 200, true, 2);
    product[2] = new Product("Coffee", "#werfdsljf", 6500, 70, false, 0);
    product[3] = new Product("Table", "#uyrepollkjf", 10000, 20);
    product[4] = new Product("Chair", "#fdsg4432d", 6700, 30, false, 0);
    product[5] = new Product("Eggs", "erdfwe00o99", 40, 150, false, 0);

    for (int k=0; k < 6; k++) {
        product[k]->display_product_details();
        std::cout << "Price after discount: " << product[k]->price_after_discount() << std::endl;
    }
    
    return 0;
}