//multiple inheritance

# include <iostream>
using namespace std;

class galaxy{
    public:
        void gal_disp(){
            cout<<"The the galaxy is milxyway"<<endl;
        }
};
class system{
    public:
        void sys_disp(){
            cout<<"The solar system we live in is heliocentric"<<endl;
        }
};
class planet :public galaxy,public system{
    public: 
        void planet_disp(){
            cout<<"We live in the planet earth"<<endl;
        }
};

int main(){
    planet obj1;
    obj1.gal_disp();
    obj1.sys_disp();
    obj1.planet_disp();
}