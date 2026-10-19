#include <iostream>
#include <cstdlib>
#include <limits>

#include "menu_functions.hpp"
#include "menu_items.hpp"

const Erom::MenuItem* Erom::show_menu(const MenuItem* current){
    if (current->parent == nullptr) {
    std::cout << current->title << std::endl;
} else {
    std::cout << current->title << std::endl;
}

    for (int i = 1; i < current->children_count; ++i){
    if (current == &Erom::MAIN) {
        std::cout << i << " - " << current->children[i]->title << std::endl;
    } else {
        std::cout << current->children[i]->title << std::endl;
    }
}

    std::cout << current->children[0]->title << std::endl;
    std::cout << "Чтение > ";

    int user_input;

    if (!(std::cin >> user_input) ||
        user_input < 0 ||
        user_input >= current->children_count){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Неверный ввод. Попробуйте снова." << std::endl;
        return current;
    }

    std::cout << std::endl;

    return current->children[user_input];
}

const Erom::MenuItem* Erom::exit(const MenuItem* current){
    std::exit(0);
}

const Erom::MenuItem* Erom::back(const MenuItem* current){
    std::cout << "Привет" << std::endl;
    return current->parent;
}

const Erom::MenuItem* Erom::pushkin_child(const MenuItem* current){
    std::cout << current->title << std::endl;
    return current->parent;
}

const Erom::MenuItem* Erom::lermontov_child(const MenuItem* current){
    return current->parent;
}

const Erom::MenuItem* Erom::krylov_child(const MenuItem* current){
    return current->parent;
}