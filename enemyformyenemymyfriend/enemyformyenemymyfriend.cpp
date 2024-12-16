#include <iostream>
using namespace std;

class Point {
private:
    int x, y; // тут оказалось проще тут координаты точки
public:
    Point() : x(0), y(0) {} // Конструктор 

    // friend-функций для перегрузки ввода и вывода
    friend ostream& operator<<(ostream& out, const Point& p);
    friend istream& operator>>(istream& in, Point& p);
};

// Подробнее тут перегрузка оператора вывода <<
ostream& operator<<(ostream& out, const Point& p) {
    out << "X: " << p.x << " Y: " << p.y; // Выводим значения x и y
    return out; // И возвращаем поток для цепочки вывода
}

// Перегрузка оператора ввода >>
istream& operator>>(istream& in, Point& p) {
    cout << "BEDU COORDINATU X и Y: ";
    in >> p.x >> p.y; // Считываеться значения для x и y
    return in; // и возвращаеться поток для дальнейших операций
}

int main() {
    Point p1;

    // Используем перегруженные операторы ввода и вывода
    cin >> p1; // Вводим значения для x и y
    cout << p1 << endl; // Выводим значения x и y

    return 0;
}
