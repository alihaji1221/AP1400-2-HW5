#include "espresso_based.h"

EspressoBased::EspressoBased()
{
    this->name = "EspressoBasedCoffee";
    this->ingredients = std::vector<Ingredient*>(); 
}

EspressoBased::EspressoBased(const EspressoBased& esp) {
    this->name = esp.name;
    this->ingredients = esp.ingredients;    
}

EspressoBased::~EspressoBased() {
    for (const auto& i : ingredients)
        delete i;
    ingredients.clear();
}

std::vector<Ingredient*>& EspressoBased::get_ingredients() {
    return this->ingredients;
}

std::string EspressoBased::get_name() {
    return this->name;
}