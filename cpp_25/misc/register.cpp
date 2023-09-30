
//Creating a map of student details
# include <iostream>
# include <map>
# include<sstream> 
# include <string>
using namespace std;

class student{
    private:
        int id; 
        string name;
        int len;
        map <int,string> stud_list;
    public:
        void insert1(int id,string name){
            stud_list.insert({id,name});
        }

        void display1()
        {
            //len = sizeof(stud_list)/sizeof(stud_list[0]);
            for(auto itr=stud_list.begin();itr!=stud_list.end();++itr)
            
                cout<<itr->first<<":"<<itr->second<<endl;
            
        }

};
int main(){
    int num,id;
    string name,var;
    int choice;
    cout<<"Enter the number of students to register";
    cin>>num;
    int i=0;
    while(i<num){
        var="s"+to_string(i) ;
        student var;
        
        cout<<"Enter the id of the student";
        cin>>id;
        cout<<"Enter the name of the student";
        cin>>name;
        var.insert1(id,name);
        i++;
        if (i==num){
            var.display1(); //not working as intended ,displays only 1 result
        }
    }
}