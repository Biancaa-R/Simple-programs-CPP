//matrice determinant <3

# include <iostream>
# include <vector>
using namespace std;
int main()

int determinant(int row,int col,vector <vector <int>> matrice);

{
	int row,col;
	cout<<"Enter the rows ";
	cin>>row;
	cout<<"Enter the columns";
	cin>>col;
	vector <vector <int>> matrice (row ,vector <int> (col));
}

int determinant(int row,int col,vector <vector <int>> matrice){
	int i=0;
	int det=0;
	for(int j=0;j<col;j++){
		vector<vector<int>> mat1 (row-1,vector <int> (col-1));
		//filling
		for (int k=0;k<row-1;k++){
			for(int l=0;l<col-1;l++){
				mat1[k][l]=matrice[k+1][]
			}
		}
	}
}
