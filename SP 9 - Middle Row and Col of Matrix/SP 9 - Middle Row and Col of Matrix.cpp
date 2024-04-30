#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int RandomeNumber(short From, short To)
{
    return rand() % (To - From + 1) + From;
}

void FullArrayWithOrderdNumber(short arr[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            arr[i][j] = RandomeNumber(1, 10);
        }
    }
}

void PrintArrayInMatrix(short arr[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%0*d\t", 2, arr[i][j]);
        }
        cout << endl;
    }
}

void PrintMiddleRowMatrix(short arr[3][3], short Row, short Col)
{
    short MiddleRow = Row / 2;
    for (int j = 0; j < Col; j++)
    {
        printf("%0*d\t", 2, arr[MiddleRow][j]);
    }
    cout << endl;
}

void PrintMiddleColMatrix(short arr[3][3], short Row, short Col)
{
    short MiddleCol = Col / 2;

    for (int j = 0; j < Row; j++)
    {
        printf("%0*d\t", 2, arr[j][MiddleCol]);
    }
    cout << endl;
}

int main()
{

    srand((unsigned)time(NULL));

    short arr1[3][3];
    short cols = 3, rows = 3;

    FullArrayWithOrderdNumber(arr1, rows, cols);

    cout << "Matrix1:\n";

    PrintArrayInMatrix(arr1, rows, cols);

    cout << "\nMiddle Row of Matrix1 is:\n";

    PrintMiddleRowMatrix(arr1, rows, cols);

    cout << "\nMiddle Col of Matrix1 is:\n";
    PrintMiddleColMatrix(arr1, rows, cols);
    return 0;
}
