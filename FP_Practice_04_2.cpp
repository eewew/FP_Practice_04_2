#include <iostream>
using namespace std;
int main()
{
    cout << "\t\tTask 1\n";
    //Пользователь с клавиатуры вводит 5 оценок студента.Определить, допущен ли студент к экзамену.Студент получает допуск, если его средний балл 4 балла и выше

    int mark1, mark2, mark3, mark4, mark5;
    float average;
    cout << "Enter 5 marks: ";
    cin >> mark1 >> mark2 >> mark3 >> mark4 >> mark5;
    average = (float)(mark1+mark2+mark3+mark4+mark5) / 5;
    if (average >= 4)
    {
        cout << "Admitted!";
    }
    else
    {
        cout << "Not admitted!";
    }


    cout << "\n\t\tTask 2\n";
    // Пользователь вводит с клавиатуры число. Если оно четное, умножить его на три, иначе — поделить на два.Результат вывести на экран.
    //To be done

    cout << "\n\t\tTask 3\n";
    //Написать программу-калькулятор. Пользователь вводит два числа и выбирает арифметическое действие.Вывести на экран результат.

    double a, b;
    cout << "Enter first digit: ";
    cin >> a;
    cout << "Enter second digit: ";
    cin >> b;
    char action;
    cout << "Choose action(+,-,*,/): ";
    cin >> action;
    switch(action) 
    {
    case'+':
        cout << a << "+" << b << "=" << a + b;
        break;
    case'-':
        cout << a << "-" << b << "=" << a - b;
        break;
    case'*':
        cout << a << "+" << b << "=" << a * b;
        break;
    case'/':
        cout << a << "/" << b << "=" << a / b;
        break;
    }

}