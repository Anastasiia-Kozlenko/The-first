#pragma once

#include "menu.hpp"

namespace Erom {
    const MenuItem* show_menu(const MenuItem* current);
    const MenuItem* exit(const MenuItem* current);
    const MenuItem* back(const MenuItem* current);
    const MenuItem* pushkin_child(const MenuItem* current);
    const MenuItem* lermontov_child(const MenuItem* current);
    const MenuItem* krylov_child(const MenuItem* current);
}