#pragma once
#include "const.h"

//---------------------------------------------------
/*
    Функция принимает в качестве
    параметра матрицу(двумерный массив) и инициализирует ее значения
    в переданном в качестве параметров диапазоне.
*/
void fill_it(int matrix[][COL],const int ROW, int a = 1, int b = 10);

//---------------------------------------------------
/*
    Функция принимает в качестве
    параметра матрицу(двумерный массив) из дробных чисел и инициализирует ее значения
    в переданном в качестве параметров диапазоне.
*/
void fill_it(double matrix[][COL], const int ROW, int a=1, int b=10);


//---------------------------------------------------
/*
    Функция принимает в качестве
    параметра массив и инициализирует ее значения
    в переданном в качестве параметров диапазоне.
*/
void fill_it(int arr[],const int SIZE, int a = 1, int b = 10);

//---------------------------------------------------
/*
    Функция принимает в качестве
    параметра массив из дробных чисел и инициализирует ее значения
    в переданном в качестве параметров диапазоне.
*/
void fill_it(double arr[], const int SIZE, int a=1, int b=10);

//---------------------------------------------------
/*
    Функция принимает в качестве
    параметра массив из символов и инициализирует его значениями.
*/
void fill_it(char arr[], const int SIZE);

//---------------------------------------------------
/*
    Функция принимает в качестве
    параметра матрицу из символов и инициализирует его значениями.
*/
void fill_it(char matrix[][COL], const int ROW);

//---------------------------------------------------
// Функция возвращает среднее арифметическое одномерного массива
double average(double numbers[], const int SIZE);

//---------------------------------------------------
// Сортирует массив методом выбора
void sort(int arr[], const int SIZE, bool direction = true);

//---------------------------------------------------
//  Функция определяют  и  возвращают  минимальное значение двумерного массива
int get_min(int matrix[][COL], const int ROW);

//---------------------------------------------------
//  Функция определяют  и  возвращают  минимальное значение одномерного массива
int get_min(int arr[], const int SIZE);

//---------------------------------------------------
// Функция определяют и возвращает, количество совершенных чисел в одномерном массиве
int amount_perfect_numbers(int numbers[],const int SIZE);

//---------------------------------------------------
// Функция определяют и возвращает, количество совершенных чисел в матрице
int amount_perfect_numbers(int matrix[][COL],const int ROW);

// ---------------------------------------------
// Функция определяет и возвращает сумму значений массива целого типа
int summa(int arr[],const int SIZE);
// ---------------------------------------------

// Функция определяет и возвращает сумму значений массива дробного типа 
double summa(double arr[],const int SIZE);
