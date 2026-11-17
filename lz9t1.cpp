#include <iostream>
#include <forward_list>

using namespace std;

int main() {
    // Створюємо початковий список (заповнюємо числами)
    forward_list<double> numList = {10.5, 20.1, 55.0, 30.2, 40.4, 55.0, 15.0};
    
    cout << "Початковий список: ";
    for (double num : numList) {
        cout << num << " ";
    }
    cout << endl;

    forward_list<double> result;
    
    // Перебираємо елементи початкового списку
    for (double num : numList) {
        // Якщо зустріли 55 і список результатів не порожній,
        // видаляємо останній доданий туди елемент (той, що стояв перед 55)
        if (num == 55.0 && !result.empty()) {
            result.pop_front(); 
        }
        // Додаємо поточний елемент
        result.push_front(num);
    }

    // Оскільки push_front додає на початок, результат вийшов задом наперед.
    // Перевертаємо його, щоб повернути нормальний порядок.
    result.reverse();

    cout << "Список після видалення елементів перед числом 55: ";
    for (double num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}