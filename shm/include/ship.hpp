#pragma once

#include <string>
#include <vector>

#include "cargo.hpp"
#include <memory>

using cargoPtr = std::shared_ptr<Cargo>;

class Ship {
public:
    Ship();
    Ship(size_t id, std::string name, size_t speed, size_t maxCrew, size_t capacity);
    Ship(size_t id, std::string name, size_t speed);

    int getId() const { return id_; }
    std::string getName() const { return name_; }
    size_t getSpeed() const { return speed_; }
    size_t getMaxCrew() const { return maxCrew_; }
    size_t getCapacity() const { return capacity_; }
    std::vector<cargoPtr> getCargo() const { return cargo_; }
    void load(cargoPtr cargo);
    Cargo* FindMatchCargo(Cargo* cargo);
    void Unload(Cargo* cargo);
    void RemoveFromStorage(Cargo* cargo);

    void setName(const std::string& name);

    Ship& operator+=(const size_t& crew);
    Ship& operator-=(const size_t& crew);

private:
    int id_;
    std::string name_;
    size_t speed_;
    size_t maxCrew_;
    size_t capacity_;
    size_t crew_;
    std::vector<cargoPtr> cargo_;
};
