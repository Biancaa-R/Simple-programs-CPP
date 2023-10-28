// Multilevel inheritance:
//taxonomy :D
# include <iostream>
using namespace std;

class family{
    // this denotes the family of the creature
    public:
        void fam_disp_hom()
        {
            cout<<"humans belong to family hominidae"<<endl;
        }
        void fam_disp_fel()
        {
            cout<<"Tigers belong to family felidae"<<endl;
        }

};
class genus: public family{
    //this denotes the genus of the creature:
    public:
        void gen_disp_hom()
        {
            cout<<"Humans belong to genus homo"<<endl;
        }
        void gen_disp_pan()
        {
            cout<<"Tigers belong to genus panthera"<<endl;
        }
};

class species: public genus{
    //this denotes the species of the creature
    public:
        void sp_disp_sap(){
            cout<<"Humans belong to species sapiens"<<endl;
        }
        void sp_disp_tig(){
            cout<<"Tigers belong to species tigris"<<endl;
        }
};

int main()
{
    int choice;
    cout<<"Enter choice humans or tiger 1,2";
    cin>>choice;
    if (choice==1){
        species hum;
        hum.fam_disp_hom();
        hum.gen_disp_hom();
        hum.sp_disp_sap();
    }
    else{
        species tig;
        tig.fam_disp_fel();
        tig.gen_disp_pan();
        tig.sp_disp_tig();
    }
}