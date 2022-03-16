#pragma once
// Функция рекурсивно вычисляет факториал
long long recursive_factorial(int N);

// ------------------------------------------
// Функция рекурсивно выводит числа от 0 до N
void recursive_print(int N);


// ------------------------------------------
// Функция рекурсивно заполняет массив символами
void recursive_fill_it(char arr[], const int SIZE);

// ------------------------------------------
// Функция рекурсивно заполняет массив числами в заданном диапазоне
void recursive_fill_it(int arr[],const int SIZE, int a=1, int b=10);

// ------------------------------------------
// Функция рекурсивно заполняет массив дробными числами в заданном диапазоне
void recursive_fill_it(double arr[],const int SIZE, int a=1, int b=10);

// ------------------------------------------
// Функция рекурсивно выводит массив
void recursive_show(int arr[],const int SIZE);
void recursive_show(double arr[],const int SIZE);
void recursive_show(char arr[],const int SIZE);

// ------------------------------------------
// Функция рекурсивно выводит массив в обратном порядке
void recursive_show_reversed(int arr[],const int SIZE);

// ------------------------------------------
// Функция рекурсивно выводит числа от N до 0
void recursive_reverse_print(int N);

// ------------------------------------------
// Функция рекурсивно выводит числа от a до b
void recursive_range_print(int a,int b);

// ------------------------------------------
// Функция рекурсивно выводит линию заданной длинны
void recursive_line(char sym, int n);

// ------------------------------------------
// Функция рекурсивно выводит число в обратном порядке
void recursive_show_reversed_number(int n);

// ------------------------------------------
// Функция рекурсивно отдаёт сумма от 0 до n
int recursive_summa(int n);

// ------------------------------------------
// Функция рекурсивно отдаёт сумму цифер
int recursive_summa_digit(int n);
