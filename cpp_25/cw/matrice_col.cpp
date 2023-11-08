# include <iostream>
using namespace std;

int main()
{
    int ArrayOfInt[] [3]={1,2,3,4,5,6,7,8,9,10,11,12,13} ;
    cout<<"rows"<<sizeof(ArrayOfInt)/sizeof(ArrayOfInt[0])<<"\n";
    cout<<"columns"<<sizeof(ArrayOfInt[0])/sizeof(int)<<"\n";
    for (int i=0;i<2;i++){
        for(int j=0;j<6;j++){
            cout<<ArrayOfInt[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<ArrayOfInt[0][3];
}