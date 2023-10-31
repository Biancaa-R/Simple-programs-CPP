/*Write a class named as bank. Include the member variables as depositor name,
account number, balance amount. Write appropriate member functions to
assign initial values, deposit an amount and display name & balance amount.
Transfer amount from one account to another and show the balance amount
available in both accounts. 
*/

# include<iostream>
using namespace std;

class bank{
    private:
        string dep_name;
        int acc_num;
        int id;
        
    public:
        float bal;
        void initial(int id){
            cout<<"Enter the depositor name";
            cin>>dep_name;
            cout<<"Enter the account number";
            cin>>acc_num;
            cout<<"Enter the balance amount";
            cin>>bal;
        }
        void deposit(int id)
        {   
            float amount;
            cout<<"Enter the amount to be deposited";
            cin>>amount;
            bal+=amount;
            cout<<"Depositor name:"<<dep_name;
            cout<<"The balance:"<<bal;

        }
        void display(int id){
            cout<<"Depositor name:"<<dep_name;
            cout<<"The balance:"<<bal;  
        }

        void transfer(int id1,bank &rpi){
            //amount transfered from id 1 to 2
            int id2;
            float amount;
            cout<<"enter the amount to be transfered";
            cin>>amount;
            if(bal>amount){
                bal-=amount;
                cout<<"Amount transfered successfully\n";
                //depositor details:
                display(id1);
                rpi.bal+=amount;
                //reciever details:
                id2=rpi.id;
                rpi.display(id2);
            }
            

        }
        

};

int main()
{
    int num;
    cout<<"Enter the number of accounts to create\n";
    cin>>(num);
    //bank arr1[num];
    bank *arr1= new bank[num];
    for (int i=0;i<num;i++){
        arr1[i].initial(i);
    }
    while (true){
        cout<<"Enter the operation to perform:\n";
        cout<<"1.display account\n";
        cout<<"2.Create account\n";
        cout<<"3.deposit amount\n";
        cout<<"4.transfer amount\n";
        cout<<"5.quit\n";

        int choice;
        cin>>choice;
        float amount;
        if (choice==5){
            break;
        }
        int id,id1;
        switch(choice){
            case 1:
                cout<<"Enter the id number";
                cin>>id;
                arr1[id].display(id);
                break;
            case 2:
                cout<<"Creating an account\n";
                cout<<"Enter the id number\n";
                cin>>id; 
                arr1[id].initial(id);
                break;
            case 3:
                cout<<"Enter the id number \n";
                cin>>id;
                arr1[id].deposit(id);
                break;
            case 4:
                cout<<"Transfer amount\n";
                cout<<"Enter the id number \n";
                cin>>id;
                cout<<"Enter the id of the reciever\n";
                cin>>id1;
                arr1[id].transfer(id,arr1[id1]);
                break;

        }
    }

}

//Important things to remember:
/* id is one num lesser than the creation num
So initially I tried to transfer the amount by passing the id2 as input to transfer method
did it work? no
invoking the object inside the class bank
as arr1[id2] showed arr1 is not defined in this scope
so I declared the array initialization in the main code ie outside main
but class bank datatype was said to be undefined...bruh
So therefore passing the entire reciever object as rpi it works*/
