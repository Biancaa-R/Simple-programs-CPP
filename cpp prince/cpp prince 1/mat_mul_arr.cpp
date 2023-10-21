// matrice multiplication with arrays:

# include <iostream>
using namespace std;

int main()
{
    int row1,row2,col1,col2;
    cout<<"Enter the value of row1";
    cin>>row1;
    cout<<"Enter the value of col1";
    cin>>col1;
    cout<<"Enter the value of col2";
    cin>>col2;
    row2=row1;

     int *arr1 =new int [row1*col1];
     for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cout<<"Enter the element ["<<i+1<<"]["<<j+1<<"]";
            cin>>arr1[i*col1+j];
        }
     }
    //displaying the matrice:
    for(int i=0;i<row1;i++){
        cout<<"[";
        for(int j=0;j<col1;j++){
            cout<<arr1[i*col1+j];
        }
        cout<<"]";
        cout<<"\n";
    }

    int *arr2 =new int [row2*col2];
     for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            cout<<"Enter the element ["<<i+1<<"]["<<j+1<<"]";
            cin>>arr2[i*col2+j];
        }
     }

     //displaying the matrice:
     for(int i=0;i<row2;i++){
        cout<<"[";
        for(int j=0;j<col2;j++){
            cout<<arr2[i*col2+j];
        }
        cout<<"]";
        cout<<"\n";
     }

    //multiplying the matrice:

    //frame work
    int *result= new int [row1*col2];
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            result[i*col2+j]=0;
        }
    }

    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            for(int k=0;k<col1;k++){
                result[i*col2+j]+=arr1[i*col1+k]+arr2[k*col2+j];
            }
        }
    }

    //displaying result:
    for(int i=0;i<row1;i++){
        cout<<"[";
        for(int j=0;j<col2;j++){
            cout<<result[i*col2+j]<<" ,";
        }
        cout<<"]";
        cout<<"\n";
    }

}