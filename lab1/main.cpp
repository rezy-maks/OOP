#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    srand(time(0));
    int n = 5;
    int **A = new int *[n];     //создание массива указателей
    for (int i = 0; i < n; i++) //создание массива для каждого указателя
    {
        A[i] = new int[n]; //
    }
    for (int i = 0; i < n; i++) //заполненние и вывод массива
    {
        for (int j = 0; j < n; j++) //
        {
            A[i][j] = 10 + rand() % 50;
            cout << setw(4) << A[i][j];
        }
        cout << "\n";
    }
    cout << "\n";
    int *new_arr = new int[n * n]; // создание одномерного массвиа
    int counter = 0;
    for (int i = 0; i < n; i++) //задание a
    {
        for (int j = n - i - 1; j > -1; j--)
        {
            new_arr[counter] = A[n - j - i - 1][j];
            counter = counter++;
            cout << setw(4) << new_arr[counter];
        }
        if (i > 0)
        {
            for (int j = n - i - 1; j > -1; j--)
            {
                new_arr[counter] = A[n - j - 1][j + i];
                counter = counter++;
                cout << setw(4) << new_arr[counter];
            }
        }
    }
    cout << "\n";
    counter = 0;
    for (int i = 0; i < n; i++) //задание b
    {
        for (int j = 0; j < n-i; j++)
        {
            new_arr[counter] = A[j][j + i];
            counter = counter++;
            cout << setw(4) << new_arr[counter];
        }
        if (i > 0)
        {
            for (int j = 0; j < n-i; j++)
            {
                new_arr[counter] = A[j + i][j];
                counter = counter++;
                cout << setw(4) << new_arr[counter];
            }
        }
    }
    counter = 0;
   /* int counter_1 =0;
    for (int i = 0; i < n; i++) //задание c
    {
        for (int j = 0; j < n-i; j++)
        {
            new_arr[counter] = A[][];
            counter = counter++;
            cout << setw(4) << new_arr[counter];
        }
    }*/
}