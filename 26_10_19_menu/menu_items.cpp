#include "menu_items.hpp"
#include "menu_functions.hpp"

namespace {
    const Erom::MenuItem* main_children[] = {
        &Erom::EXIT,
        &Erom::WRITERS
    };

    const int main_size = sizeof(main_children) / sizeof(main_children[0]);

    const Erom::MenuItem* writers_children[] = {
        &Erom::BACK_MAIN,
        &Erom::PUSHKIN,
        &Erom::LERMONTOV,
        &Erom::KRYLOV
    };

    const int writers_size = sizeof(writers_children) / sizeof(writers_children[0]);

    const Erom::MenuItem* pushkin_children[] = {
        &Erom::BACK_WRITERS,
        &Erom::DUBROVSKY,
        &Erom::EUGENE_ONEGIN,
        &Erom::WINTER_EVENING
    };

    const int pushkin_size = sizeof(pushkin_children) / sizeof(pushkin_children[0]);
}

const Erom::MenuItem Erom::MAIN = {
    "Главное меню", Erom::show_menu, nullptr,
    main_children, main_size
};

const Erom::MenuItem Erom::EXIT = {
    "0 - Завершить чтение", Erom::exit, &Erom::MAIN
};

const Erom::MenuItem Erom::WRITERS = {
    "Русские писатели", Erom::show_menu, &Erom::MAIN,
    writers_children, writers_size
};

const Erom::MenuItem Erom::BACK_MAIN = {
    "0 - Выйти в главное меню", Erom::back, &Erom::MAIN
};

const Erom::MenuItem Erom::PUSHKIN = {
    "1 - Читать Пушкина", Erom::show_menu, &Erom::WRITERS,
    pushkin_children, pushkin_size
};

const Erom::MenuItem Erom::LERMONTOV = {
    "2 - Читать Лермонтова", Erom::lermontov_child, &Erom::WRITERS
};

const Erom::MenuItem Erom::KRYLOV = {
    "3 - Читать Крылова", Erom::krylov_child, &Erom::WRITERS
};

const Erom::MenuItem Erom::BACK_WRITERS = {
    "0 - Выйти в предыдущее меню", Erom::back, &Erom::WRITERS
};

const Erom::MenuItem Erom::DUBROVSKY = {
    "1 - Дубровский", Erom::pushkin_child, &Erom::PUSHKIN
};

const Erom::MenuItem Erom::EUGENE_ONEGIN = {
    "2 - Евгений Онегин", Erom::pushkin_child, &Erom::PUSHKIN
};

const Erom::MenuItem Erom::WINTER_EVENING = {
    "3 - Зимний вечер", Erom::pushkin_child, &Erom::PUSHKIN
};