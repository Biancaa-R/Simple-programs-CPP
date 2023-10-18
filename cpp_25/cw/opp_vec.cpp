//to perform various vector operations:
/*
# include <iostream>
# include <vector>
using namespace std;
vector <int> vec1;
void remdup(vector <int> vec1);
int main(){
    vec1.assign(10,5);

    for(int i=0;i<vec1.size();i++){
        cout<<vec1[i]<<"\t";
    }
    remdup(vec1);
}
void rempdup(vector <int> vec1){
    //lets have some variety shall we?
    for(int i=0;i<vec1.size();i++){
        for(int j=0;j<vec1.size();j++){
            //code to remove duplicates
            if(i!=j){
                if(vec1.at(i)==vec1.at(j)){
                    vec1.erase(vec1.begin()+j);
                    break;
                    rempdup(vec1);
                }
            }
        }

    }
    cout<<"xxx/n";
    for(int i=0;i<=vec1.size();i++){
        cout<<vec1[i]<<"\t";
    }   

}*/

#include <iostream>
#include <vector>
using namespace std;

void remdup(vector<int>& vec);

int main() {
    vector<int> vec1;
    vec1.assign(10, 5);
    //vec1={1,3,4,5,5,5,6,6};

    for (int i = 0; i < vec1.size(); i++) {
        cout << vec1[i] << "\t";
    }

    remdup(vec1);

    return 0;
}

void remdup(vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        for (int j = i + 1; j < vec.size(); j++) {
            if (vec[i] == vec[j]) {
                vec.erase(vec.begin() + j);
                j--; // To recheck the new element at position j
            }
        }
    }

    cout << "\nAfter removing duplicates:\n";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << "\t";
    }
}
