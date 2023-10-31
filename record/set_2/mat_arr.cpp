//4) Matrix addition, subtraction and multiplication using 2D Integer array and
//vectors/iterators 
//using 2d arrays

# include <iostream>
# include <vector>
using namespace std;

int main()
{   
    int row1,col1;
    int row2,col2;
    cout<<"Enter the row value";
    cin>>row1;
    cout<<"Enter the column value";
    cin>>col1;
    row2=row1;
    col2=col1;

    int arr1[row1][col1];
    int arr2[row2][col2];

     //Inputting the first matrice:
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cout<<"Enter the element ["<<i<<"]["<<j<<"]";
            cin>>arr1[i][j];
        }
    }
     //Inputting the second matrice:
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            cout<<"Enter the element ["<<i<<"]["<<"j"<<"]";
            cin>>arr2[i][j];
        }
    }

    //matrice addition:
    int add_arr[row1][row2];
    for (int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            add_arr[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

    //display:
    for(int i=0;i<row1;i++){
        cout<<"[";
        for(int j=0;j<col1;j++){
            cout<<add_arr[i][j]<<"\t";
        }
        cout<<"]";
    }

    //Matrice subtraction:
    int sub_arr[row1][col1];
    for (int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            sub_arr[i][j]=arr1[i][j]-arr2[i][j];
        }
    }

    //display:
    for(int i=0;i<row1;i++){
        cout<<"[";
        for(int j=0;j<col1;j++){
            cout<<sub_arr[i][j]<<"\t";
        }
        cout<<"]";
    }

    //matrice multiplication:
    int mult_arr[row1][row2];
    for (int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            mult_arr[i][j]=0;
        }
    }
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            for(int k=0;k<col1;k++){
                mult_arr[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }

    //display:
    for(int i=0;i<row1;i++){
        cout<<"[";
        for(int j=0;j<col1;j++){
            cout<<mult_arr[i][j]<<"\t";
        }
        cout<<"]";
    }

