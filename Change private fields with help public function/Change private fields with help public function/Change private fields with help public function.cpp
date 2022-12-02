//change private fields with help public functions
#include <iostream>
using namespace std;

class Test1
{
private:
    int x;
    int y;
    int z;

public:
    void fillingFields()
    {
        cout << "Введите координату x" << "\t";
        cin >> x;
        cout << "Введите координату y" << "\t";
        cin >> y;
        cout << "Введите координату z" << "\t";
        cin >> z;
    }

    void overviewFigure()
    {
        cout << "Длина вашей фигуры = " << x << endl;
        cout << "Ширина вашей фигуры = " << y << endl;
        cout << "Высота вашей фигуры = " << z << endl;
    }
};


int main()
{
    setlocale(LC_ALL, "rus");

    Test1 figure;

    figure.fillingFields();
    figure.overviewFigure();
}