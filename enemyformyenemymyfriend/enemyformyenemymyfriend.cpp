#include <iostream>
using namespace std;

class Point {
private:
    int x, y; // ��� ��������� ����� ��� ���������� �����
public:
    Point() : x(0), y(0) {} // ����������� 

    // friend-������� ��� ���������� ����� � ������
    friend ostream& operator<<(ostream& out, const Point& p);
    friend istream& operator>>(istream& in, Point& p);
};

// ��������� ��� ���������� ��������� ������ <<
ostream& operator<<(ostream& out, const Point& p) {
    out << "X: " << p.x << " Y: " << p.y; // ������� �������� x � y
    return out; // � ���������� ����� ��� ������� ������
}

// ���������� ��������� ����� >>
istream& operator>>(istream& in, Point& p) {
    cout << "BEDU COORDINATU X � Y: ";
    in >> p.x >> p.y; // ������������ �������� ��� x � y
    return in; // � ������������� ����� ��� ���������� ��������
}

int main() {
    Point p1;

    // ���������� ������������� ��������� ����� � ������
    cin >> p1; // ������ �������� ��� x � y
    cout << p1 << endl; // ������� �������� x � y

    return 0;
}
