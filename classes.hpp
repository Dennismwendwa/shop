#ifndef CLASSES_HPP
#define CLASSES_HPP

#include <iostream>
#include <string>
#include <unordered_map>
#include <memory>

class Product {
    private:
    std::string name;
    std::string barcode;
    double price;
    int stock_quantity;
    bool on_offer;
    int discount;

    public:
    Product(std::string name, std::string barcode, double price,
            int stock_quantity, bool on_offer=false, int discount=0);

    std::string get_barcode() const;
    std::string get_name() const;
    int get_stockQuantity()  const;
    double get_price() const;
    
    double price_after_discount();
    void display_product_details() const;
};

class InventoryManager {
    private:
    std::unordered_map<std::string, std::shared_ptr<Product>> products;

    public:
    bool add_product(const std::string &name, const std::string &barcode,
        int stock_quantity, double price, bool on_offer=false, int discount=0) {
        if (products.find(name) != products.end()) {
            std::cout << "❌ Error: Product '" << name << "' already exists!\n";
            return false;
        }

        products[name] = std::make_shared<Product>(name, barcode, price,
            stock_quantity, on_offer, discount);
            std::cout << "✅ Product '" << name << "' added successfully!\n";
            return true;

    }

    void display_all_products() const {
        std::cout << "\n📦 Inventory List:\n";
        for (const auto &pair : products) {
            pair.second->display_product_details();
        }
    }
};

#endif