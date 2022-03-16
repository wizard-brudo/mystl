#include <iostream>
#include "include/const.h"
using namespace std;


void show_reversed(int number) {
    while(number) {
        cout << number % 10;
        number /= 10;
    }
}

void show_pythagorean_triple(int range_start, int range_finish, int count)
{
    int k = 0;
    for (int a = range_start; a < range_finish; a++)
    {
        for (int b = range_start; b < range_finish; b++)
        {
            for (int c = range_start; c < range_finish; c++)
            {
                if (a * a + b * b == c * c)
                {
                    cout << k++ << ". " << a << " " << b << " " << c << endl;
                }
                if (k == count)
                    break;
            }
        }
    }
}

int capacity(int number)
{
    int i = 0;
    while (number)
    {
        number /= 10;
        i++;
    }
    return i;
}

int get_digit(int number, int index)
{
    int count = capacity(number);
    while (count > index)
    {
        number /= 10;
        count--;
    }
    return number % 10;
}

void line(char ch, int repeat)
{
    for (int i = 0; i < repeat; i++)
    {
        cout << ch;
    }
    cout << endl;
}
bool is_eng_letter(char letter) {
    for (int i = 0; i < 66; i++)
    {
        if(eng_alphabet[i] == letter)
            return true;
    }
    return false;
}

long long factorial(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}

void frame(int height,int length, char sym) {
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if(i==0 || i == height-1 || j==0 || j==length-1)
                cout << sym << " ";
            else
                cout << "  ";
        }
        cout << endl;
        
    }
}

void line()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "*";
    }
    cout << endl;
}


bool is_palindrom(int number)
{
    int count = capacity(number);
    for (int i = 1, j = count; i <= count / 2; i++, j--)
    {
        if (get_digit(number, i) != get_digit(number, j))
            return false;
    }
    return true;
}

void show_max(int a, int b, int c)
{
    int max = (a > b ? a : b);
    max = (c > max ? c : max);
    cout << "Максимальное значение: " << max;
}


bool is_perfect_number(int number) {
    int summa = 0;
    for (int i = 1; i <= number / 2; i++)
    {
        if(number % i == 0)
            summa += i;
    }
    return summa == number;
}

int summa(int number) {
    int summa = 0;
    while (number)
    {
        summa += number % 10;
        number /= 10;
    }
    return summa;
}

int reverse(int number) {
    int reversed_number = 0;
    while(number) {
        reversed_number = number % 10 + reversed_number * 10;
        number /= 10;
    }
    return reversed_number;
}