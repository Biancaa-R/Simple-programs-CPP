//Adjoint 
# include <iostream>
# include <vector>
using namespace std;

int determinant(const vector<vector<int>>& param, int rows, int cols) {
    if (rows == cols) {
        int result = 0;

        if (rows == 2) {
            return param[0][0] * param[1][1] - param[0][1] * param[1][0];
        } else {
            for (int i = 0; i < cols; i++) {
                //ethana cols iruko athana sub matrices varum one onum order 1 kammiya
                vector<vector<int>> arr1(rows - 1, vector<int>(cols - 1));
                for (int j = 1; j < rows; j++) {
                    int arr1_col = 0;
                    for (int k = 0; k < cols; k++) {
                        if (k != i) {
                            arr1[j - 1][arr1_col] = param[j][k];
                            arr1_col++;
                            //arr_coll is defined as some values of column can be omitted when k=i ie 1
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

int** minor(const vector<vector<int>>& param, int rows, int cols){
    //this is happening to every single element therefore:
    //This is not recursive like det
    //int newArray[rows][cols];
    int** newArray = new int*[rows];
    for (int i = 0; i < rows; ++i)
    {
        newArray[i] = new int[cols];
    }
    if (rows == cols) {

        if (rows == 2) {
            //newArray={{param[1][1],param[1][0]},{param[0][1],param[0][0]}};
            //I dono why prev statement gives error
            newArray[0][0] = param[1][1];
            newArray[0][1] = param[1][0];
            newArray[1][0] = param[0][1];
            newArray[1][1] = param[0][0];
            return newArray;
            
        } else {
            for(int i=0;i<rows;i++){
                for(int j=0;j<cols;j++)
                //for defining the final matrix
                {
                    vector<vector<int>>arr1 (rows-1,vector<int> (cols-1));
                    int arr1_row=0;
                    int arr1_col=0;
                    for (int k=0;k<rows;k++){
                        for(int l=0;l<cols;l++){
                            if (i!=k){
                                if(j!=l){
                                    
                                    arr1[arr1_row][arr1_col]=param[k][l];
                                    arr1_col+=1;
                                }
                            }
                            
                        }
                        if (i!=k){
                            arr1_col=0;
                            arr1_row+=1;
                        }

                    }

                //oru matrice by this time vandhurukum
                newArray[i][j]=determinant(arr1,rows-1,cols-1);
                //cout<<newArray[i][j];

                }
            }
        }
        return newArray;
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
    int ** resultArray=minor(matrice,rows,cols);
    // Print the minor matrix
    cout << "Minor Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << resultArray[i][j] << "\t";
        }
        cout << endl;
    }
    cout<<result;

}