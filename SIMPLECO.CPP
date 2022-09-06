#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
clrscr();
double principal,simple_interest,compound_interest,ammount,x;
float num,rate;
int choice,years,num_of_times,y;
cout<<"\n do you want to calculate simple(enter 1) or compound (enter 2) interest \n";
cin>>choice;

switch(choice){
    case 1:
	cout<<"\n Enter the principal amount \n";
	cin>>principal;
	cout<<"\n Enter the number of years \n" ;
	cin>>num;
	cout<<"\n Enter the rate of interest \n";
	cin>>rate;
	cout<<"\n Enter the number of times multiplied in a year \n";
	cin>>num_of_times;

	simple_interest=principal*num*rate*num_of_times/100;
	ammount=principal+simple_interest;
	cout<<"\n Therefore the simple_interest is :"<<simple_interest;
	cout<<"\n Therefore the ammount payable is :"<<ammount;
	break;
    case 2:
	cout<<"\n Enter the principal amount \n";
	cin>>principal;
	cout<<"\n Enter the number of years \n";
	cin>>years;
	cout<<"\n Enter the rate of interest \n";
	cin>>rate;
	cout<<"\n Enter the number of times multiplied in a year \n";
	cin>>num_of_times;

	x=principal*(1+rate/num_of_times);
	y=years*num_of_times ;
	ammount=pow(x,y);
	break;

    default:
	cout<<"\n Invalid choice \n";
    }
}




