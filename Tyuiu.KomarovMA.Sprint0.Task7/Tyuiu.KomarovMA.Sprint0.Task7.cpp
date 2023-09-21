// Tyuiu.KomarovMA.Sprint0.Task7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.KomarovMA.Sprint0.Task7.Lib/Tyuiu.KomarovMA.Sprint0.Task7.Lib.cpp"
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    //Init
    ISprint0Task7* date = new Service1();
    cout << "Введите трехзначное число:" << endl;
    int a;
    int b;
    cin >> a;
    cout << "Введите цифру" << endl;
    cin >> b;
    bool n;

    //run
    n = date->Rezalt(a, b);

    //Valid
    if (n)
    {
        cout << "Данная цифра имеется" << endl;
    }
    else
    {
        cout << "Данная цифра отсутствует" << endl;
    }
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
