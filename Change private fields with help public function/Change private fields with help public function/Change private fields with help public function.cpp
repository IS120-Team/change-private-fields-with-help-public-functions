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
        cout << "������� ���������� x" << "\t";
        cin >> x;
        cout << "������� ���������� y" << "\t";
        cin >> y;
        cout << "������� ���������� z" << "\t";
        cin >> z;
    }

    void overviewFigure()
    {
        cout << "����� ����� ������ = " << x << endl;
        cout << "������ ����� ������ = " << y << endl;
        cout << "������ ����� ������ = " << z << endl;
    }
};


int main()
{
    setlocale(LC_ALL, "rus");

    Test1 figure;

    figure.fillingFields();
    figure.overviewFigure();
}