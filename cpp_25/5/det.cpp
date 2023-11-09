# include <iostream>
# include <vector>
using namespace std;

/*int determinant (const vector<vector<int>>& param,int rows,int cols){
    if (rows==cols){
        int rows_r=rows;
        int cols_r=cols;
        int result=0;
        if(rows_r==2){
            return param[0][0]*param[1][1]-param[0][1]*param[1][0];
        }
        else{
            for(int i=0;i<cols_r;i++){
                //int arr1[rows_r-1][cols_r-1];
                vector<vector<int>> arr1(rows-1, vector<int>(cols-1));
                for (int j=0;j<rows_r;j++){
                    for(int k=0;k<cols_r;k++){
                        if (k<i){
                            arr1[j][k]=param[j][k+1];
                        }
                        else if(k>i){
                            arr1[j][k]=param[j+1][k+1];
                        }
                    }
                }
                if (i%2!=0){
                    result+= -param[0][i]*determinant(arr1,rows-1,cols-1);
                }
                else{
                    result+= param[0][i]*determinant(arr1,rows-1,cols-1);
                }
            }
            return result;
        }
    }
}*/

int determinant(const vector<vector<int>>& param, int rows, int cols) {
    if (rows == cols) {
        int result = 0;

        if (rows == 2) {
            return param[0][0] * param[1][1] - param[0][1] * param[1][0];
        } else {
            for (int i = 0; i < cols; i++) {
                vector<vector<int>> arr1(rows - 1, vector<int>(cols - 1));
                for (int j = 1; j < rows; j++) {
                    int arr1_col = 0;
                    for (int k = 0; k < cols; k++) {
                        if (k != i) {
                            arr1[j - 1][arr1_col] = param[j][k];
                            arr1_col++;
                        }
                    }
                }
                //result += param[0][i] * determinant(arr1, rows - 1, cols - 1);
                if (i%2!=0){
                    result-= param[0][i]*determinant(arr1,rows-1,cols-1);
                }
                else{
                    result+= param[0][i]*determinant(arr1,rows-1,cols-1);
                }
            }
            return result;
        }
    }
}


int main()
{   
    int rows,cols;
    cout<<"Enter the number of rows\n";
    cin>>rows;
    cout<<"Enter the number of columns \n";
    cin>>cols;
    //int matrice [rows][cols];
    vector<vector<int>> matrice(rows, vector<int>(cols));
    for (int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<"Enter the element ["<<i<<"]["<<j<<"]\n";
            cin>>matrice[i][j];
        }
    }
    int result=0;
    result=determinant(matrice,rows,cols);
    cout<<result;
}