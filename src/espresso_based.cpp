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
    
std::string EspressoBased::get_name() {
    return this->name;
}

EspressoBased::~EspressoBased() {
    for (const auto& i : ingredients)
        delete i;
    ingredients.clear();
}
