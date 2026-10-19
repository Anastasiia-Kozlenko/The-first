#include <clocale>

#include "menu.hpp"
#include "menu_items.hpp"
#include "menu_functions.hpp"

int main(){

    const Erom::MenuItem* current = &Erom::MAIN;

    do {
        current = current->func(current);
    }while(true);

    return 0;
}