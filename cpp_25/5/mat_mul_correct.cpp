#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int row1, col1, row2, col2;
   
   cout << "Enter the number of rows in matrix 1: ";
   cin >> row1;
   cout << "Enter the number of columns in matrix 1: ";
   cin >> col1;
   row2 =col1;
   cout << "Enter the number of columns in matrix 2: ";
   cin >> col2;
   
   // Create matrix 1 and matrix 2
   vector<vector<int>> mat1(row1, vector<int>(col1));
   vector<vector<int>> mat2(row2, vector<int>(col2));
   
   // Input for matrix 1
   cout << "Enter elements for matrix 1:\n";
   for (int i = 0; i < row1; i++) {
       for (int j = 0; j < col1; j++) {
           cout << "Enter the element at row " << i + 1 << " and column " << j + 1 << ": ";
           cin >> mat1[i][j];
           //setting in the values as array itself
       }
   }
   
   // Input for matrix 2
   cout << "Enter elements for matrix 2:" << endl;
   for (int i = 0; i < row2; i++) {
       for (int j = 0; j < col2; j++) {
           cout << "Enter the element at row " << i + 1 << " and column " << j + 1 << ": ";
           cin >> mat2[i][j];
       }
   }


   // Create the result matrix
   vector<vector<int>> result(row1, vector<int>(col2, 0));

   // Matrix multiplication
   for (int i = 0; i < row1; i++) {
       for (int j = 0; j < col2; j++) {
           for (int k = 0; k < col1; k++) {
               result[i][j] += mat1[i][k] * mat2[k][j];
           }
       }
   }

   // Display the result matrix
   cout << "Resultant matrix:" << endl;
   for (int i = 0; i < row1; i++) {
       for (int j = 0; j < col2; j++) {
           cout << result[i][j] << " ";
       }
       cout << endl;
   }

   return 0;
}

