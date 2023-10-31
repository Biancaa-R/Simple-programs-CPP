# include <iostream>
using namespace std;

int main()
{   
    int rows,cols;
    cout<<"Program to create 2d array of strings\n";
    cout<<"Enter the number of rows";
    cin>>rows;
    cout<<"Enter the number of columns";
    cin>>cols;
    string arr1[rows][cols];
    for (int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<"Enter the string ["<<i<<"]["<<j<<"]";
            fflush(stdin);
            getline(cin,arr1[i][j]);
        }
    }
    //for displaying the string:
    for (int i=0;i<rows;i++){
        cout<<"[";
        for(int j=0;j<cols;j++){
            cout<<arr1[i][j]<<"\t";
        }
        cout<<"]";
    }
}