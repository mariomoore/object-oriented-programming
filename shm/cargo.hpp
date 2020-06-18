#pragma once

#include <string>

class Cargo {
public:
    Cargo() = default;
    Cargo(std::string name, size_t ammount, double basePrice);
    ~Cargo() = default;

    std::string getName() const { return name_; }
    size_t getAmmount() const { return ammount_; }
    double getBasePrice() const { return basePrice_; }

    Cargo& operator+=(const size_t& ammount);
    Cargo& operator-=(const size_t& ammount);
    bool operator==(const Cargo& freight2);

private:
    std::string name_;
    size_t ammount_;
    double basePrice_;
};

class Fruit : public Cargo {
    Fruit(std::string name, size_t ammount, double basePrice);
    ~Fruit();

};
