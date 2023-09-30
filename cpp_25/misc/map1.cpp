#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
   //initialising the map
   map <int, string> student;
    int num,id;
    string name;
    cout<<"Enter the number of records?";
    cin>>num;
    vector <int> list1(num);
    for(int i=0;i<num;i++){
        cout<<"Enter the id of the student";
        cin>>id;
        list1.push_back(id);
        cout<<"Enter the name of the student";
        cin>>name;
        student.insert({id,name});
    }
   for (auto itr = student.begin(); itr != student.end(); ++itr) {
      cout << itr->first << ": " << itr->second << endl;
   }
   int id1;
    cout<<"Enter the id number to search for the record";
    cin>>id1;
    int found;
    found=0;
    for(int x:list1){
        if (x==id1){
            cout<<"Element found";
            cout<<student[id];
            found=1;
        }
    }
    if (found==0){
        cout<<"Element not found";
    }
    
   //cout<<student[1];

   return 0;
}