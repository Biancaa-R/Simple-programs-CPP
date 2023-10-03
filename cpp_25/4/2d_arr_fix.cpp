//2d array fixed
/*7. Declare and Initialize 2D array of integer datatype of 5 rows and 6 columns.

Expected output:

1 4 2 4 5 5

5 4 2 9 0 1

6 4 5 5 7 9

7 4 2 1 3 5

9 4 5 6 9 2*/

# include <iostream>
using namespace std;
int main(){
    int arr1[5][6]={{1,4,2,4,5,5},{5,4,2,9,0,1},{6,4,5,5,7,9},{7,4,2,1,3,5},{9,4,5,6,9,2}};
    for(int i=0;i<5;i++){
        cout<<"[";
        for(int j=0;j<6;j++){
            cout<<arr1[i][j];
            if (j!=5) 
                {cout<<",";}
        }
        cout<<"]\n";
    }
    
}