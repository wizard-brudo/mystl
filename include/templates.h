#pragma once
#include <iostream>
#include <iomanip>
#include "const.h"
using namespace std;
// Шаблон принимает матрицу, количество строк и выводит матрицу на экран.
template <typename Type>
void show(Type matrix[][COL], const int ROW)
{
    cout << fixed << setprecision(2);
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << setw(6) << matrix[i][j];
        }
        cout << endl;
    }
}

//  Шаблон принимает одномерный массив, его размер и выводит массив на экран.
template <typename Type>
void show(Type arr[], int SIZE, bool direction = true)
{
    cout << fixed << setprecision(2);
    if (direction)
    {
        for (int i = 0; i < SIZE; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        for (int i = SIZE - 1; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
    }
}

//  Шаблон принимает одномерный массив, его размер и отдаёт максимум
template <typename Type>
Type maximum(Type arr[], const int SIZE)
{
    Type max = arr[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
//  Шаблон принимает матрицу,и отдаёт максимум
template <typename Type>
Type maximum(Type matrix[][COL], const int ROW)
{
    Type max = matrix[0][0];
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (matrix[i][j] > max)
                max = matrix[i][j];
        }
    }
    return max;
}

//  Шаблон принимает одномерный массив, его размер и отдаёт максимум
template <typename Type>
Type minimum(Type arr[], const int SIZE)
{
    Type min = arr[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

//  Шаблон принимает матрицу,и отдаёт минимум
template <typename Type>
Type minimum(Type matrix[][COL], const int ROW)
{
    Type min = matrix[0][0];
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (matrix[i][j] < min)
                min = matrix[i][j];
        }
    }
    return max;
}

// Взято с интернета https://stackoverflow.com/questions/453099/size-of-static-array
// Я знаю про функцию size но ведь когда своё то оно роднее

// Функция возращает размер статического массива
template <typename T, size_t N>
inline size_t get_size(T (&arr)[N]) { return N; }

//  Шаблон выводит массив с надписью 'Массив:'
template <typename Type>
void wrapper_show(Type arr[], const int SIZE)
{
    cout << "Массив:";
    show(arr, SIZE);
    cout << endl;
}

//  Шаблон выводит матрицу с надписью 'Матрица:'
template <typename Type>
void wrapper_show(Type matrix[][COL], const int ROW)
{
    cout << "Матрица:";
    cout << endl;
    show(matrix, ROW);
    cout << endl;
}

//  Шаблон проверяет являеться ли одномерный массив палиндромом
template <typename Type>
bool is_palindrom(Type arr[], const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] != arr[SIZE - i - 1])
            return false;
    }
    return true;
}

//  Шаблон отдаёт количество повторений заданного элемента
template <typename Type>
int repeations(Type arr[], int SIZE, Type disered_element)
{
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] == disered_element)
            count++;
    }
    return count;
}

//  Шаблон смотрит есть ли заданный элемент в массиве
template <typename Type>
bool find(Type arr[], int SIZE, Type disered_element)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] == disered_element)
            return true;
    }
    return false;
}

//  Шаблон смотрит есть ли заданный элемент в массиве и отдаёт индекс
template <typename Type>
int find_index(int arr[], int SIZE, int disered_element)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] == disered_element)
            return i;
    }
    return -1;
}

//  Шаблон переворачивает массив
template <typename Type>
void reverse(Type arr[], const int SIZE)
{
    Type temp;
    for (int i = 0, j = SIZE - 1; i < j; i++, j--)
    {
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }
}

// Шаблон сортирует массив
template <typename Type>
void bubble_sort(Type arr[], const int SIZE)
{
    Type temp;
    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < SIZE - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // меняем элементы местами
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


// Шаблон бинарного поиска значения
template<typename Type>
int binary_search(Type arr[],Type disered_element, const int SIZE) {
    int bottom=0,middle,top=SIZE-1;
    do
    {
        middle = (bottom + top) / 2;
        if(arr[middle] == disered_element)
            return middle;
        else if(disered_element < arr[middle])
            top = middle - 1;
        else
            bottom =  middle + 1;
    } while (bottom <= top);
    return -1;
}

// Шаблон мешает значения массива
template<typename Type>
void mix(Type arr[], const int SIZE) {
    Type temp;
    int rand_number;
    for (int i = 0; i < SIZE; i++)
    {
        rand_number = rand() % SIZE;
        temp = arr[rand_number];
        arr[rand_number] = arr[i];
        arr[i] = temp;
    }
    
}

