#ifndef SUB_INGREDIENTS_H
#define SUB_INGREDIENTS_H

class Cinnamon: protected Ingredient
{
public:
    Cinnamon(size_t units) : Ingredient{5, units}
    {
        this->name = "Cinnamon";
    }

    virtual std::string get_name() {return this->name;}
};

class Chocolate: protected Ingredient
{
public:
    Chocolate(size_t units) : Ingredient{5, units}
    {
        this->name = "Chocolate";
    }

    virtual std::string get_name() {return this->name;}
};

class Sugar: protected Ingredient
{
public:
    Sugar(size_t units) : Ingredient{1, units}
    {
        this->name = "Sugar";
    }

    virtual std::string get_name() {return this->name;}
};

class Cookie: protected Ingredient
{
public:
    Cookie(size_t units) : Ingredient{10, units}
    {
        this->name = "Cookie";
    }

    virtual std::string get_name() {return this->name;}
};

class Espresso: protected Ingredient
{
public:
    Espresso(size_t units) : Ingredient{15, units}
    {
        this->name = "Espresso";
    }

    virtual std::string get_name() {return this->name;}
};

class Milk: protected Ingredient
{
public:
    Milk(size_t units) : Ingredient{10, units}
    {
        this->name = "Milk";
    }

    virtual std::string get_name() {return this->name;}
};

class MilkFoam: protected Ingredient
{
public:
    MilkFoam(size_t units) : Ingredient{5, units}
    {
        this->name = "MilkFoam";
    }

    virtual std::string get_name() {return this->name;}
};

class Water: protected Ingredient
{
public:
    Water(size_t units) : Ingredient{1, units}
    {
        this->name = "Water";
    }

    virtual std::string get_name() {return this->name;}
};

#endif // SUB_INGREDIENTS_H