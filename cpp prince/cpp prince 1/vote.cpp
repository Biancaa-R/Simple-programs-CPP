# include <iostream>
using namespace std;
int main()
{
    //eligible to vote or not
    int age;
    cout<<"Enter your age\n";
    cin>>age;
    if(age>=18){
        cout<<"You are eligible to vote";
    }
    else{
        cout<<"You are not eligible to vote";
    }
    return 0;

}