
#include <iostream>
#include<vector>

using namespace std;

int main()
{
   // 4. c Write a program to find the product of two matrices using vectors and iterators.
   int row1,row2,col1,col2;
   int x;
   cout<<"Enter the no. of rows in matrice 1";
   cin>>row1;
   cout<<"Enter the number of columns in matrice 1";
   cin>>col1;
   row2=col1;
   cout<<"Enter the number of columns in matrice 2";
   cin>>col2;
   //vector <int> mat1(row1);
   vector <vector<int> >mat1;
   for (int i=0;i<row1;i++){
       vector <int> r+str(i)(col1);
       for(int j=0;j<col1;j++){
           cout<<"Enter the elemnt";
           cin>>x;
           r1.push_back(x);
       }
       mat1.push_back(r1);
       r1.clear();
   }
   //displaying the matrice:
   for(int i=0;i<row1;i++){
       for(int j=0;j<col1;j++){
           cout<<mat1[i][j];
       }
   }
}