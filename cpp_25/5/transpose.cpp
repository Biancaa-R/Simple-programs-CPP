//transpose of  a vector matrix

# include <iostream>
# include <vector>
using namespace std;

int main()
{
	int row,col;
	cout<<"Enter the rows ";
	cin>>row;
	cout<<"Enter the columns";
	cin>>col;
	vector <vector<int>> mat1(row,vector <int> (col));
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<"Enter the element ["<<i+1<<"]["<<j+1<<"]";
			cin>>mat1[i][j];
		}
	}
	//displaying the matrice
	cout<<"The given matrice\n";
	for (int i=0;i<row;i++){
		cout<<"[";
		for(int j=0;j<col;j++){
			cout<<mat1[i][j];
			if(j!=col-1){
				cout<<",";
			}
		}
		cout<<"]";
		cout<<"\n";
	}
	vector <vector <int>> trans(col,vector<int> (row));
	for (int i=0;i<col;i++){
		for(int j=0;j<row;j++){
			trans[i][j]=mat1[j][i];
		}
	}
	
	//displaying the matrice
	for (int i=0;i<col;i++){
		cout<<"[";
		for(int j=0;j<row;j++){
			cout<<trans[i][j];
			if(j!=row-1){
				cout<<",";
			}
		}
		cout<<"]";
		cout<<"\n";
	}
}
