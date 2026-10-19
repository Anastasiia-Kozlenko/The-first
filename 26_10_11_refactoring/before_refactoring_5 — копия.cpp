#include <iostream>

int main() { 
    int date, month, year1;
    std::cout << "Введите дату дня" << std::endl;
    std::cin >> date;

    std::cout << "Введите число месяца" << std::endl;
    std::cin >> month;

    std::cout << "Введите год" << std::endl;
    std::cin >> year1;

    int year2 = year1 % 100;
    int century = year1 / 100;
    int day = (
        date + 
        (13 * month - 1) / 5 + 
        year2 / 4 + 
        century / 4 - 
        2 * century + 
        777
    ) % 7;

    switch(day) {
        case 0:
            std::cout << "Воскресенье" << std::endl;
            break;

        case 1:
            std::cout << "Понедельник" << std::endl;
            break;

        case 2:
            std::cout << "Вторник" << std::endl;
            break;

        case 3:
            std::cout << "Среда" << std::endl;
            break;

        case 4:
            std::cout << "Четверг" << std::endl;
            break;

        case 5:
            std::cout << "Пятница" << std::endl;
            break;

        case 6:
            std::cout << "Суббота" << std::endl;
            break;

        default:
            std::cout << "Ошибка" << std::endl;
            break;
    }

return 0;
}