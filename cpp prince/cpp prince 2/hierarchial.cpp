//Hierarchial
# include <iostream>
using namespace std;

//taxonomy example again
class family{
    public:
    void fam_disp(){
        cout<<"The family is felidae"<<endl;
    }
};
class genus: public family{
    public:
    void genus_disp(){
        cout<<"The genus is panthera"<<endl;
    }
};

class species_tigris: public family{
    public:
    void species_disp(){
        cout<<"The species is tigris"<<endl;
    }
};

class species_leo: public family{
    public:
        void species_disp(){
            cout<<"The species is leo"<<endl;
        }
};

int main(){
    cout<<"If the animal is tiger"<<endl;
    species_tigris obj1;
    obj1.fam_disp();
    obj1.species_disp();

    cout<<"If the animal is lion"<<endl;
    species_leo obj2;
    obj2.fam_disp();
    obj2.species_disp();

    cout<<"If animal belongs to genus panthera";
    genus obj3;
    obj3.fam_disp();
}