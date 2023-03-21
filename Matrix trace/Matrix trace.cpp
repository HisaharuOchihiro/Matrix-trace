#include <iostream>
#include <ctime>
void matrix()
{
    srand(time(0));
    int strings, columns, Matrix_trace = 0;
    std::cout << "Enter strings: ";
    std::cin >> strings;
    std::cout << "Enter columns: ";
    std::cin >> columns;
    int **table = new int* [strings];
    for (int i = 0; i < strings; i++)
    {
        table[i] = new int[columns];
    }
    for (int i = 0; i < strings; i++)
    {
        std::cout << std::endl;
        for (int j = 0; j < columns; j++)
        {
            int random = rand() % 100;
            table[i][j] = random;
            std::cout << table[i][j] << " ";
            if (i == j) Matrix_trace += table[i][j];
        }

    }
    for (int i = 0; i < strings; i++)
    {
        delete[] table[i];
    }
    delete[] table;
    std::cout << std::endl;
    std::cout << "Matrix trace - " << Matrix_trace << std::endl;
}
int main()
{
    matrix();
}