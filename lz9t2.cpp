#include <iostream>
#include <forward_list>
#include <iomanip> // Бібліотека для setprecision, щоб красиво вивести середнє

using namespace std;

int main() {
    // 1. Створити список оцінок студентів
    forward_list<int> grades = {85, 90, 78};

    // 2. Додайте кілька елементів на початок списку
    grades.push_front(92);
    grades.push_front(88);
    grades.push_front(75);

    cout << "Список оцінок після додавання нових: ";
    for (int grade : grades) {
        cout << grade << " ";
    }
    cout << endl;

    // 3. Видаліть першу оцінку (якщо список не порожній)
    if (!grades.empty()) {
        grades.pop_front();
    }

    cout << "Список оцінок після видалення першої: ";
    for (int grade : grades) {
        cout << grade << " ";
    }
    cout << endl;

    // 4. Знайдіть середнє значення
    double sum = 0.0;
    int count = 0;

    // Перебір елементів для обчислення суми та кількості
    for (int grade : grades) {
        sum += grade;
        count++;
    }

    // Перевірка, щоб уникнути ділення на нуль
    if (count > 0) {
        double average = sum / count;
        cout << "Середнє значення оцінок: " 
             << fixed << setprecision(2) << average << endl;
    } else {
        cout << "Список порожній, середнє значення обчислити неможливо." << endl;
    }

    return 0;
}