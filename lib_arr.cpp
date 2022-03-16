#include <iostream>
#include <iomanip>
#include "include/const.h"
using namespace std;

void fill_it(int matrix[][COL], const int ROW, int a, int b)
{
    srand(time(0));
    int temp;
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            matrix[i][j] = rand() % (b - a + 1) + a;
        }
    }
}

void fill_it(double matrix[][COL], const int ROW, int a, int b)
{
    srand(time(0));
    int temp;
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            matrix[i][j] = (double)(rand()) / RAND_MAX * (b - a) + a;
        }
    }
}

void fill_it(char arr[], const int SIZE)
{
    srand(time(0));
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = eng_alphabet[rand() % 52];
    }
}

void fill_it(char matrix[][COL], const int ROW)
{
    srand(time(0));
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            matrix[i][j] = eng_alphabet[rand() % 52];
        }
    }
}

void fill_it(int arr[], const int SIZE, int a, int b)
{
    srand(time(0));
    int temp;
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % (b - a + 1) + a;
    }
}

void sort(int arr[], int SIZE, bool direction)
{
    int element, element_index;
    for (int i = 0; i < SIZE; i++)
    {
        element = arr[i];
        element_index = i;
        for (int j = i + 1; j < SIZE; j++)
        {
            if (direction)
            {
                if (arr[j] < element)
                {
                    element = arr[j];
                    element_index = j;
                }
            }
            else
            {
                if (arr[j] > element)
                {
                    element = arr[j];
                    element_index = j;
                }
            }
        }
        arr[element_index] = arr[i];
        arr[i] = element;
    }
}

double average(double numbers[], int SIZE)
{
    double summa = 0;
    for (int i = 0; i < SIZE; i++)
    {
        summa += numbers[i];
    }
    return summa / SIZE;
}

int get_min(int arr[], const int SIZE)
{
    int min = arr[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int get_min(int matrix[][COL], const int ROW)
{
    int min = matrix[0][0];
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (matrix[i][j] < min)
                min = matrix[i][j];
        }
    }
    return min;
}

int amount_perfect_numbers(int numbers[], const int SIZE)
{
    int count = 0, summa;
    for (int i = 0; i < SIZE; i++)
    {
        summa = 0;
        // Вычисляем являеться ли число совершенным
        for (int j = 1; j <= numbers[i] / 2; j++)
        {
            if (numbers[i] % j == 0)
                summa += j;
        }
        if (summa == numbers[i])
            count++;
    }
    return count;
}
int amount_perfect_numbers(int matrix[][COL], const int ROW)
{
    int count = 0, summa;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            summa = 0;
            // Вычисляем являеться ли число совершенным
            for (int k = 1; k <= matrix[i][j] / 2; k++)
            {
                if (matrix[i][j] % k == 0)
                    summa += k;
            }
            if (summa == matrix[i][j])
                count++;
        }
    }
    return count;
}

int summa(int arr[], const int SIZE)
{
    int summa = 0;
    for (int i = 0; i < SIZE; i++)
    {
        summa += arr[i];
    }
    return summa;
}

double summa(double arr[], const int SIZE)
{
    double summa = 0;
    for (int i = 0; i < SIZE; i++)
    {
        summa += arr[i];
    }
    return summa;
}
