//Perfect number using while;
# include <iostream>
using namespace std;
int main(){
    int num,perf;
    cout<<"Enter the number to find if perfect";
    cin>>num;
    int i=1;
    while(i<((num/2)+1)){
        if(num%i==0){
            perf+=i;
            i=++i;
        }
    }
    if(num==perf){
        cout<<"The entered number"<<num<<" is perfect";
    }
    else{
        cout<<"The entered number"<<num<<" is not perfect";
    }
}