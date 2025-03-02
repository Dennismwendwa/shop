#include "classes.hpp"

Product::Product(std::string name, std::string barcode, double price,
    int stock_quantity, bool on_offer, int discount)
: name(name), barcode(barcode), price(price),
stock_quantity(stock_quantity), on_offer(on_offer), discount(discount) {}

double Product::get_price() const {
    return price;
}

std::string Product::get_barcode() const {
    return barcode;
}

std::string Product::get_name() const {
    return name;
}

int Product::get_stockQuantity()  const{
    return stock_quantity;
}

// Function to calculate the price after discount
double Product::price_after_discount() {
    if (on_offer) {
        double new_price = ((100.0 - discount) / 100.0) * price;
        return new_price;
    } else {
        return price;
    }
}

// Display product details
void Product::display_product_details() const {
    std::cout << "name: " << name
                << " Price: " << price
                << " Stock: " << stock_quantity
                << " Discount: " << discount
                << " On offer: " << (on_offer ? "Yes" : "No")
                << std::endl;
}
