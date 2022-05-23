#include "cappuccino.h"
#include "sub_ingredients.h"
#include "iostream"

Cappuccino::Cappuccino(): EspressoBased {} {
    this->name = "Cappuccino";
    this->ingredients = std::vector<Ingredient*>();
    auto esp = new Espresso(2);
    this->ingredients.push_back(esp);
    auto milk = new Milk(2);
    this->ingredients.push_back(milk);
    auto foam = new MilkFoam(1);
    this->ingredients.push_back(foam);
}

Cappuccino::Cappuccino(const Cappuccino& cap): EspressoBased {} {
    this->name = cap.name;
    this->ingredients = std::vector<Ingredient*>();
    for (auto ingredient : cap.ingredients) 
        this->ingredients.push_back(ingredient);
    for (auto ingredient : cap.side_items) 
        this->side_items.push_back(ingredient);
}

 Cappuccino::~Cappuccino() {
    for (const auto& i : side_items)
        delete i;
    side_items.clear();
 }

std::string Cappuccino::get_name() {
    return this->name;
}

double Cappuccino::price() {
    double price {0};
    for (auto i : ingredients)
        price += i->get_units() * i->get_price_unit();

    for (auto i : side_items)
        price += i->get_units() * i->get_price_unit();

    return price;
}

std::vector<Ingredient*>& Cappuccino::get_side_items() {
    return side_items;
}

void Cappuccino::add_side_item(Ingredient* side) {
    side_items.push_back(side);
}   



