#include <iostream>
using namespace std;

#define MAX 100

void inputMatrix(int A[][MAX], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> A[i][j];
        }
    }
}

void addition(int A[][MAX], int B[][MAX], int r, int c)
{
    cout << "\nAddition:\n";

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << A[i][j] + B[i][j] << "\t";
        }
        cout << endl;
    }
}

void subtraction(int A[][MAX], int B[][MAX], int r, int c)
{
    cout << "\nSubtraction:\n";

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << A[i][j] - B[i][j] << "\t";
        }
        cout << endl;
    }
}

void multiplication(int A[][MAX], int B[][MAX],
                    int r1, int c1, int r2, int c2)
{
    int C[MAX][MAX] = {0};

    cout << "\nMultiplication:\n";

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }

            cout << C[i][j] << "\t";
        }
        cout << endl;
    }
}

void transpose(int A[][MAX], int r, int c)
{
    cout << "\nTranspose:\n";

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << A[j][i] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int A[MAX][MAX], B[MAX][MAX];
    int r1, c1, r2, c2;
    int choice;

    // Input dimensions of Matrix A
    cout << "Enter rows and columns of Matrix A: ";
    cin >> r1 >> c1;

    if (r1 <= 0 || c1 <= 0 || r1 > MAX || c1 > MAX)
    {
        cout << "Invalid dimensions for Matrix A.";
        return 0;
    }

    // Input dimensions of Matrix B
    cout << "Enter rows and columns of Matrix B: ";
    cin >> r2 >> c2;

    if (r2 <= 0 || c2 <= 0 || r2 > MAX || c2 > MAX)
    {
        cout << "Invalid dimensions for Matrix B.";
        return 0;
    }

    // Input Matrix A
    cout << "\nEnter elements of Matrix A:\n";
    inputMatrix(A, r1, c1);

    // Input Matrix B
    cout << "\nEnter elements of Matrix B:\n";
    inputMatrix(B, r2, c2);

    // Menu
    do
    {
        cout << "\n------ MENU ------\n";
        cout << "\t1. Addition\n";
        cout << "\t2. Subtraction\n";
        cout << "\t3. Multiplication\n";
        cout << "\t4. Transpose\n";
        cout << "\t5. Exit\n";
        cout << "------ MENU ------\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                if (r1 == r2 && c1 == c2)
                {
                    addition(A, B, r1, c1);
                }
                else
                {
                    cout << "\nAddition is not possible.";
                    cout << "\nBoth matrices must have the same dimensions.";
                }
                break;

            case 2:
                if (r1 == r2 && c1 == c2)
                {
                    subtraction(A, B, r1, c1);
                }
                else
                {
                    cout << "\nSubtraction is not possible.";
                    cout << "\nBoth matrices must have the same dimensions.";
                }
                break;

            case 3:
                if (c1 == r2)
                {
                    multiplication(A, B, r1, c1, r2, c2);
                }
                else
                {
                    cout << "\nMultiplication is not possible.";
                    cout << "\nColumns of Matrix A must equal rows of Matrix B.";
                }
                break;

            case 4:
                cout << "\nTranspose of Matrix A:";
                transpose(A, r1, c1);

                cout << "\nTranspose of Matrix B:";
                transpose(B, r2, c2);
                break;

            case 5:
                cout << "\nExiting program...";
                break;

            default:
                cout << "\nInvalid choice. Please try again.";
        }

    } while (choice != 5);

    return 0;
}