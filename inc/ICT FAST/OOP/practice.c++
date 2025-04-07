#include <iostream>
#include <string>

using namespace std;

class sparse_matrix
{
private:
    int rows;
    int cols;
    int* non_zero;
    int** matrix;
    int** sparse_rep;
public:
    sparse_matrix(int, int);
    void get_nonZero(int*);
    void get_sparse_rep(int**);
    void sparse_to_matrix();
    void print_matrix();
};

sparse_matrix::sparse_matrix(int r, int c)
{
    cols = c;
    rows = r;

    matrix = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new int[cols]();
    }
}

void sparse_matrix::get_nonZero(int* nonZeroEntries)
{
    non_zero = nonZeroEntries;
}

void sparse_matrix::get_sparse_rep(int** sparseRep)
{
    sparse_rep = sparseRep;
}

void sparse_matrix::sparse_to_matrix()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (sparse_rep[i][0] != 0)
            {
                matrix[i][sparse_rep[i][j + j + 1]] = sparse_rep[i][j + j + 2];
            }
        }
    }
}

void sparse_matrix::print_matrix()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    sparse_matrix sm(rows, cols);

    int* nonZero = new int[rows];
    cout << "Enter the number of non-zero entries for each row: ";
    for (int i = 0; i < rows; i++)
    {
        cin >> nonZero[i];
    }
    sm.get_nonZero(nonZero);

    int** sparseRep = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        sparseRep[i] = new int[3 * nonZero[i]];
    }

    cout << "Enter the sparse representation (row, col, value): " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3 * nonZero[i]; j++)
        {
            cin >> sparseRep[i][j];
        }
    }
    sm.get_sparse_rep(sparseRep);

    sm.sparse_to_matrix();
    cout << "The full matrix is: " << endl;
    sm.print_matrix();

    delete[] nonZero;
    for (int i = 0; i < rows; i++)
    {
        delete[] sparseRep[i];
    }
    delete[] sparseRep;

    return 0;
}

