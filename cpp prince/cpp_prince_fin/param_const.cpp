# include <iostream>
using namespace std;

class values{
    private:
        string name;
        int sno;
    public:
        values(string n,int s){
            name=n;
            sno=s;
        }
        void display(){
            cout<<"The value of name is"<<name<<"\n";
            cout<<"The value of number is"<<sno;
        }
};

int main()
{
    int num;
    string name;
    cout<<"Enter the value of name";
    cin>>name;
    cout<<"Enter the value of num";
    cin>>num;
    values v=values(name,num);
    v.display();
}