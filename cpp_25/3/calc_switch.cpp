//Program using switch case:
# include <iostream>
using namespace std;
int main()
{
    //simple calculator using switch case nested
    //CPP Doesnot allow using string as argument for switch
    char operand;
    int num1,num2;
    char option;
    cout<<"Enter the first number";
    cin>>num1;
    cout<<"Enter the second number";
    cin>>num2;
    cout<<"Enter the kind of operation(arithmetic,logical,bitwise)";
    cin>>option;
    switch (option) {
        case 'a':
            cout<<"Enter the operation(%,*,+,-,/)";
            cin>>operand;
            switch(operand){
                case '+':
                    cout<<"The sum is"<<(num1+num2);
                    break;
                case '-':
                    cout<<"The difference is"<<(num1-num2);
                    break;
                case '/':
                    float quo;
                    quo=num1/num2;
                    cout<<"The quotient is"<<quo;
                    break;
                case '*':
                    cout<<"The product is"<<(num1*num2);
                    break;
                case '%':
                    cout<<"The modulus is"<<(num1%num2);
                    break;

                default:
                    cout<<"Invalid operator";
                    break;

            }
            break;
            
        case 'b':
            cout<<"Enter the operator(&,|,^,>>,<<,~)\n";
            //cout<<"Please enter < instead of <<, > instead of >>";

            cin>>operand;
            switch(operand){
                case '&':
                    //bitwise and
                    cout<<"The binary and is"<<(num1&num2);
                    break;
                case '|':
                    //bitwise or
                    cout<<"The bitwise or is"<<(num1|num2);
                    break;
                case '^':
                    //bitwise xor:
                    cout<<"The bitwise xor is"<<(num1^num2);
                    break;
                case '>':
                    //bitwise shift right
                    int sr;
                    sr=num1>>num2;
                    cout<<"The bitwise shift right is"<<sr;
                    break;
                case '<':
                    //bitwise shift left
                    int sl;
                    sl=num1<<num2;
                    cout<<"The bitwise shift left is"<<sl;
                    break;
                case '~':
                    //bitwise not
                    cout<<"The bitwise not of "<<num1<<"is "<<~num1;
                    cout<<"The bitwise not of "<<num2<<"is "<<~num2;
                    break;
                default:
                    cout<<"Invalid operator";
                    break;
            }
            break;

        case 'l':
            cout<<"Enter the operation(&&,||,!)";
            cin>>operand;

            switch (operand){
                
                case '&':
                    cout<<"The logical and is"<<(num1&&num2);
                    break;
                case '|':
                    cout<<"The logical or is"<<(num1||num2);
                    break;
                case '!':
                    cout<<"The logical not of "<<num2<<" is"<<!(num2);
                    cout<<"The logical not of "<<num1<<" is "<<!(num1);
                    break;
                default:
                    cout<<"Invalid operator";
                    break;
            }
            break;
            
    }

}