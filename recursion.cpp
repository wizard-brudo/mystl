#include <iostream>
#include <iomanip>
#include "include/const.h"
using namespace std;
long long recursive_factorial(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}

long long recursive_recursive_factorial(int N)
{
    if(N < 0) 
        return 0; 
    else if (N == 1) 
        return 1; 
    return N * recursive_factorial(N - 1); 
}

void recursive_print(int N) {
    if(N > 0)
        recursive_print(N-1);
    cout << N << "  ";
}

void recursive_show(int arr[],const int SIZE) {
    if(SIZE > 0)
        recursive_show(arr,SIZE-1);
    cout << arr[SIZE] << "  ";
}

void recursive_show(double arr[],const int SIZE) {
    if(SIZE > 0)
        recursive_show(arr,SIZE-1);
    cout << arr[SIZE] << "  ";
}

void recursive_show(char arr[],const int SIZE) {
    if(SIZE > 0)
        recursive_show(arr,SIZE-1);
    cout << arr[SIZE] << "  ";
}

void recursive_fill_it(char arr[],const int SIZE) {
    if(SIZE > 0)
        recursive_fill_it(arr,SIZE-1);
    arr[SIZE] = eng_alphabet[rand() % 52];
}

void recursive_fill_it(int arr[],const int SIZE, int a, int b) {
    if(SIZE > 0)
        recursive_fill_it(arr,SIZE-1,a,b);
    arr[SIZE] = rand() % (b - a + 1) + a;
}

void recursive_fill_it(double arr[],const int SIZE, int a, int b) {
    cout << fixed << setprecision(2);
    if(SIZE > 0)
        recursive_fill_it(arr,SIZE-1,a,b);
    arr[SIZE] = (double)(rand()) / RAND_MAX * (b - a) + a;
}


void recursive_show_reversed(int arr[],const int SIZE) {
    cout << arr[SIZE] << "  ";
    if(SIZE > 0)
        recursive_show_reversed(arr,SIZE-1);
}

void recursive_reverse_print(int N) {
    cout << N << "  ";
    if(N > 0)
        recursive_reverse_print(N-1);
}

void recursive_range_print(int a,int b) {
    cout << a << "  ";
    if(a > b)
        recursive_range_print(a - 1, b);
    else if(a < b)
        recursive_range_print(a + 1, b);
}

void recursive_line(char sym, int n) {
    if(n > 1)
        recursive_line(sym,n-1);
    cout << sym;
}

void recursive_show_reversed_number(int n) {
    if(n) {
        cout << n % 10;
        recursive_show_reversed_number(n / 10);
    }
}

int recursive_summa(int n) {
    if(n == 1)
        return 1;
    return n + recursive_summa(n-1);
}

int recursive_summa_digit(int n) {
    if(n < 10)
        return n;
    return n % 10 + recursive_summa_digit(n/10);
}