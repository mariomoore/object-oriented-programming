#pragma once

#include <string>

#include "store.hpp"

class Coordinates {
public:
    Coordinates(size_t posX, size_t posY);
    bool operator==(const Coordinates& pos) const {
        return positionX_ == pos.positionX_ && positionY_ == pos.positionY_;
    }
    size_t getPositionX() const { return positionX_; }
    size_t getPositionY() const { return positionY_; }
    static size_t distance(const Coordinates& lhs, const Coordinates& rhs);
private:
    size_t positionX_;
    size_t positionY_;
};

class Island {
public:
    Island(size_t posX, size_t posY);
    Coordinates getPosition();
    Store getStore() const {return store_;}
private:
    Coordinates position_;
    Store store_;
};
