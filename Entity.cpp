#include "Entity.h"
#include "Component.h"

void Entity::addComponent(std::type_index type, Component* c) {
    components[type] = c;
}

Entity::~Entity() {
    for (auto& c : components) {
        delete c.second;
    }
}


